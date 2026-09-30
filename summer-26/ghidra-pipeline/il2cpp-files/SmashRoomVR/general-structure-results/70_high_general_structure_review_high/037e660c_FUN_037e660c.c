/*
FUNCTION_NAME: FUN_037e660c
ENTRY_POINT: 037e660c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


undefined1  [16]
FUN_037e660c(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined1 local_50 [16];
  
  puVar2 = StringLiteral_2840;
  if ((DAT_03ff8211 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2841);
    thunk_FUN_01ad9084(StringLiteral_2298);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2729);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_3419);
    thunk_FUN_01ad9084(StringLiteral_2840);
    thunk_FUN_01ad9084(PTR_DAT_03da3b30);
    DAT_03ff8211 = 1;
  }
  local_50 = FUN_037e6ed4(param_1,param_3,param_4,param_5);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_037cfc00(local_50,0);
  if ((uVar4 & 1) != 0) {
    return local_50;
  }
  if (param_4 != (long *)0x0) {
    uVar5 = thunk_FUN_01acfdbc(param_4,0);
    puVar2 = Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__;
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                        );
    }
    uVar4 = FUN_03058838(param_2,uVar5,0);
    if ((uVar4 & 1) == 0) {
      return local_50;
    }
    plVar6 = (long *)FUN_037e5998(param_1,param_2,param_3);
    if (plVar6 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar6 + 0x198))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x1a0));
      if ((uVar4 & 1) == 0) {
        return local_50;
      }
      plVar6 = (long *)thunk_FUN_01acfdbc(param_4,0);
      puVar3 = StringLiteral_2298;
      bVar1 = *(byte *)(*(long *)
                         Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                       0x130);
      if ((bVar1 <= *(byte *)(*param_4 + 0x130)) &&
         (plVar9 = plVar6,
         *(long *)(*(long *)(*param_4 + 200) + (ulong)bVar1 * 8 + -8) ==
         *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__)) {
        do {
          plVar6 = plVar9;
          if (plVar6 == (long *)0x0) goto UnityEngine_Animator__SetInteger;
          plVar9 = (long *)(**(code **)(*plVar6 + 0x858))(plVar6,*(undefined8 *)(*plVar6 + 0x860));
          lVar10 = *(long *)puVar2;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar10);
          }
          uVar4 = FUN_03058838(plVar9,0,0);
          if ((uVar4 & 1) == 0) break;
          uVar5 = *(undefined8 *)puVar3;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar5 = FUN_0304eec0(uVar5,0);
          uVar4 = FUN_03058838(plVar6,uVar5,0);
          if ((uVar4 & 1) == 0) break;
          if (param_2 == (long *)0x0) goto UnityEngine_Animator__SetInteger;
          uVar4 = (**(code **)(*param_2 + 0x2a8))(param_2,plVar9,*(undefined8 *)(*param_2 + 0x2b0));
        } while ((uVar4 & 1) != 0);
      }
      puVar2 = PTR_DAT_03da3b30;
      lVar10 = *param_5;
      if (*(int *)(*(long *)PTR_DAT_03da3b30 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_037e70d0(lVar10);
      if (*param_5 != 0) {
        lVar10 = FUN_037d1cd0(*param_5,0);
        uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
        if (*(int *)(*(long *)StringLiteral_2729 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)StringLiteral_2729);
        }
        uVar7 = FUN_037b2948(plVar6,0);
        uVar8 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_3419);
        FUN_037d05e4(uVar8,uVar7,0);
        if (lVar10 != 0) {
          FUN_025bc5b0(lVar10,uVar5,uVar8,*(undefined8 *)StringLiteral_2841);
          return local_50;
        }
      }
    }
  }
UnityEngine_Animator__SetInteger:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


