/*
FUNCTION_NAME: FUN_039e90b8
ENTRY_POINT: 039e90b8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_15;telemetry_or_network_hits_3
*/


undefined4 FUN_039e90b8(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_40;
  long local_38;
  
  local_38 = param_1;
  if ((DAT_03ffcc06 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03daf650);
    thunk_FUN_01ad9084(PTR_DAT_03daf658);
    thunk_FUN_01ad9084(PTR_DAT_03daf660);
    thunk_FUN_01ad9084(PTR_DAT_03daf668);
    thunk_FUN_01ad9084(PTR_DAT_03daf670);
    thunk_FUN_01ad9084(PTR_DAT_03daf678);
    thunk_FUN_01ad9084(PTR_DAT_03daf680);
    thunk_FUN_01ad9084(PTR_DAT_03daf688);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_3289);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03daf690);
    thunk_FUN_01ad9084(PTR_DAT_03daf698);
    DAT_03ffcc06 = 1;
  }
  local_40 = &local_38;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    goto LAB_039e9478;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    goto LAB_039e9488;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x18) != 0)) {
      uVar5 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03daf678);
      FUN_02906bf0(uVar5,*(undefined8 *)PTR_DAT_03daf670);
      *(undefined8 *)(local_38 + 0x30) = uVar5;
      thunk_FUN_01b4f09c((undefined8 *)(local_38 + 0x30),uVar5);
      if (*(long *)(local_38 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar8 = *(long *)(*(long *)(local_38 + 0x28) + 0x20);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_02c75f18(&local_98,lVar8,*(undefined8 *)PTR_DAT_03daf680);
      uStack_68 = uStack_90;
      local_70 = local_98;
      uStack_58 = uStack_80;
      uStack_60 = local_88;
      local_50 = local_78;
      *(undefined8 *)(local_38 + 0x58) = local_78;
      *(undefined8 *)(local_38 + 0x50) = uStack_80;
      *(undefined8 *)(local_38 + 0x48) = local_88;
      *(undefined8 *)(local_38 + 0x40) = uStack_90;
      *(undefined8 *)(local_38 + 0x38) = local_98;
      thunk_FUN_01b4f09c(local_38 + 0x38,0);
      *(undefined4 *)(local_38 + 0x10) = 0xfffffffd;
      while (uVar7 = FUN_02758f74(local_38 + 0x38,*(undefined8 *)PTR_DAT_03daf650), (uVar7 & 1) != 0
            ) {
        *(undefined8 *)(local_38 + 0x68) = *(undefined8 *)(local_38 + 0x50);
        *(undefined8 *)(local_38 + 0x60) = *(undefined8 *)(local_38 + 0x48);
        *(undefined8 *)(local_38 + 0x70) = *(undefined8 *)(local_38 + 0x58);
        thunk_FUN_01b4f09c(local_38 + 0x60,0);
        puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
        uVar5 = *(undefined8 *)(local_38 + 0x70);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar7 = FUN_0391f968(uVar5,0,0);
        puVar4 = PTR_DAT_03daf668;
        if ((uVar7 & 1) != 0) {
          if (*(long *)(local_38 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar7 = FUN_029072e4(*(long *)(local_38 + 0x30),*(undefined8 *)(local_38 + 0x70),
                               *(undefined8 *)PTR_DAT_03daf668);
          if ((uVar7 & 1) == 0) {
            if (*(long *)(local_38 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_02907dd4(*(long *)(local_38 + 0x30),*(undefined8 *)(local_38 + 0x70),
                         *(undefined8 *)PTR_DAT_03daf660);
            *(undefined8 *)(local_38 + 0x18) = *(undefined8 *)(local_38 + 0x70);
            thunk_FUN_01b4f09c();
            *(undefined4 *)(local_38 + 0x10) = 1;
            return 1;
          }
        }
        uVar7 = FUN_02ee6cf0(*(undefined8 *)(local_38 + 0x68),0);
        if ((uVar7 & 1) == 0) {
          uVar5 = *(undefined8 *)(local_38 + 0x68);
          uVar10 = *(undefined8 *)PTR_DAT_03daf690;
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar10 = FUN_0304eec0(uVar10,0);
          uVar11 = FUN_03941954(0);
          if (*(int *)(*(long *)StringLiteral_3289 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          plVar6 = (long *)FUN_03a9134c(uVar11,uVar5,uVar10,0);
          if (plVar6 == (long *)0x0) {
            plVar6 = (long *)0x0;
            *(undefined8 *)(local_38 + 0x78) = 0;
          }
          else {
            lVar8 = *(long *)PTR_DAT_03daf698;
            bVar2 = *(byte *)(lVar8 + 0x130);
            if (*(byte *)(*plVar6 + 0x130) < bVar2) {
              plVar9 = (long *)0x0;
            }
            else {
              plVar9 = plVar6;
              if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != lVar8) {
                plVar9 = (long *)0x0;
              }
            }
            *(long **)(local_38 + 0x78) = plVar9;
            if (*(byte *)(*plVar6 + 0x130) < bVar2) {
              plVar6 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != lVar8) {
              plVar6 = (long *)0x0;
            }
          }
          thunk_FUN_01b4f09c(local_38 + 0x78,plVar6);
          uVar5 = *(undefined8 *)(local_38 + 0x78);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar7 = FUN_0391f968(uVar5,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(long *)(local_38 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar7 = FUN_029072e4(*(long *)(local_38 + 0x30),*(undefined8 *)(local_38 + 0x70),
                                 *(undefined8 *)puVar4);
            if ((uVar7 & 1) == 0) {
              if (*(long *)(local_38 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              FUN_02907dd4(*(long *)(local_38 + 0x30),*(undefined8 *)(local_38 + 0x70),
                           *(undefined8 *)PTR_DAT_03daf660);
              *(undefined8 *)(local_38 + 0x18) = *(undefined8 *)(local_38 + 0x78);
              thunk_FUN_01b4f09c();
              *(undefined4 *)(local_38 + 0x10) = 2;
              return 1;
            }
          }
LAB_039e9478:
          *(undefined8 *)(local_38 + 0x78) = 0;
          thunk_FUN_01b4f09c((undefined8 *)(local_38 + 0x78),0);
        }
LAB_039e9488:
        *(undefined8 *)(local_38 + 0x60) = 0;
        *(undefined8 *)(local_38 + 0x68) = 0;
        *(undefined8 *)(local_38 + 0x70) = 0;
      }
      FUN_039e9640();
      *(undefined8 *)(local_38 + 0x58) = 0;
      *(undefined8 *)(local_38 + 0x50) = 0;
      *(undefined8 *)(local_38 + 0x48) = 0;
      *(undefined8 *)(local_38 + 0x40) = 0;
      *(undefined8 *)(local_38 + 0x38) = 0;
    }
  }
  return 0;
}


