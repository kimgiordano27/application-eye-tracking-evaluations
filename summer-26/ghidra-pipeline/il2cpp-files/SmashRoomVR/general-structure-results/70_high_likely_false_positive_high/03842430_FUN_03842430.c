/*
FUNCTION_NAME: FUN_03842430
ENTRY_POINT: 03842430
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_14;telemetry_or_network_hits_3
*/


void FUN_03842430(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined1 local_38 [16];
  long local_28;
  
  if ((DAT_03ff856a & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da6bf0);
    thunk_FUN_01ad9084(PTR_DAT_03da57d8);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Json_WitResponseClass_<get_Childs>d__17_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da57e0);
    thunk_FUN_01ad9084(PTR_DAT_03da6bf8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da6c00);
    DAT_03ff856a = 1;
  }
  local_38._8_8_ = 0;
  local_28 = 0;
  local_38._0_8_ = 0;
  plVar1 = (long *)param_1[0x13];
  if (plVar1 == (long *)0x0) goto LAB_038426a0;
  uVar2 = (**(code **)(*plVar1 + 0x178))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x180));
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (param_2 == (long *)0x0) goto LAB_038426a0;
  lVar4 = *param_2;
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)
           Method_Meta_WitAi_Json_WitResponseClass_<get_Childs>d__17_System_Collections_IEnumerator_Reset__
         ) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 5) * 0x10 + 0x138);
        goto UnityEngine_GUISkin__Apply;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ae9f78(param_2,*(long *)
                                 Method_Meta_WitAi_Json_WitResponseClass_<get_Childs>d__17_System_Collections_IEnumerator_Reset__
                        ,5);
UnityEngine_GUISkin__Apply:
  lVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  uVar2 = FUN_03922f24(lVar4,0,0);
  if ((uVar2 & 1) == 0) {
    if ((lVar4 == 0) || (lVar4 = FUN_0391c2b8(lVar4,0), lVar4 == 0)) goto LAB_038426a0;
    uVar2 = FUN_0391fbb4(lVar4,0);
    if ((uVar2 & 1) != 0) goto LAB_0384258c;
  }
  else {
LAB_0384258c:
    FUN_03842748(param_1,param_2);
  }
  lVar4 = thunk_FUN_01afa9e0(param_2,*(undefined8 *)PTR_DAT_03da57e0);
  if (lVar4 != 0) {
    FUN_03842900(param_1,lVar4);
  }
  lVar4 = thunk_FUN_01afa9e0(param_2,*(undefined8 *)PTR_DAT_03da57d8);
  if (lVar4 != 0) {
    UnityEngine_GUISkin__get_horizontalScrollbarRightButton(param_1,lVar4);
  }
  plVar1 = (long *)param_1[0x13];
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x1a8))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x1b0));
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (param_1[0x1b] != 0) {
      FUN_029074b0(param_1[0x1b],param_2,*(undefined8 *)PTR_DAT_03da6bf0);
      if (param_1[0x2a] != 0) {
        local_38 = System_Collections_Generic_List<StyleSyntaxToken>__TrueForAll
                             (param_1[0x2a],&local_28,*(undefined8 *)PTR_DAT_03da6bf8);
        if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        *(long *)(local_28 + 0x10) = (long)param_1;
        thunk_FUN_01b4f09c((long *)(local_28 + 0x10),param_1);
        if (local_28 != 0) {
          *(long *)(local_28 + 0x18) = (long)param_2;
          thunk_FUN_01b4f09c((long *)(local_28 + 0x18),param_2);
          (**(code **)(*param_1 + 0x2c8))(param_1,local_28,*(undefined8 *)(*param_1 + 0x2d0));
          FUN_02d788c0(local_38,*(undefined8 *)PTR_DAT_03da6c00);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
  }
LAB_038426a0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


