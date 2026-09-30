/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsResult$$Warn
ENTRY_POINT: 036d2abc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;telemetry_or_network_hits_4
*/


long Unity_VisualScripting_FullSerializer_fsResult__Warn(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined4 unaff_w19;
  long unaff_x20;
  int iVar11;
  ulong unaff_x21;
  long unaff_x22;
  long in_stack_00000008;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0x468));
  thunk_FUN_01ad9084(StringLiteral_669);
  thunk_FUN_01ad9084(PTR_DAT_03d9d470);
  thunk_FUN_01ad9084(PTR_DAT_03d9d478);
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  thunk_FUN_01ad9084(PTR_DAT_03d9cb18);
  *(undefined1 *)(unaff_x22 + 0x5a2) = 1;
  in_stack_00000008 = 0;
  if ((unaff_x20 != 0) && (lVar7 = FUN_036fedd0(), lVar7 != 0)) {
    uVar8 = FUN_02630bd0(lVar7,unaff_w19,&stack0x00000008,*(undefined8 *)PTR_DAT_03d9d468);
    puVar5 = PTR_DAT_03d9d478;
    puVar4 = PTR_DAT_03d9cb18;
    puVar3 = StringLiteral_669;
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if ((uVar8 & 1) == 0) {
      if ((((unaff_x21 & 1) != 0) && (lVar7 = *(long *)(unaff_x20 + 0xd8), lVar7 != 0)) &&
         (iVar1 = *(int *)(lVar7 + 0x18), 0 < iVar1)) {
        iVar11 = 0;
        do {
          lVar9 = FUN_02b59714(lVar7,iVar11,*(undefined8 *)puVar5);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar2);
          }
          uVar8 = FUN_03922f24(lVar9,0,0);
          if ((uVar8 & 1) == 0) {
            if (lVar9 == 0) goto LAB_036d2c60;
            iVar6 = *(int *)(lVar9 + 0x18);
            if (iVar6 == 0) {
              iVar6 = FUN_03922ce0(lVar9,0);
              *(int *)(lVar9 + 0x18) = iVar6;
            }
            lVar10 = *(long *)puVar4;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar10 = *(long *)puVar4;
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
            if (lVar10 == 0) goto LAB_036d2c60;
            uVar8 = FUN_028f8a44(lVar10,iVar6,*(undefined8 *)puVar3);
            if ((uVar8 & 1) != 0) {
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              in_stack_00000008 = FUN_036d2a88(unaff_w19,lVar9,1);
              if (in_stack_00000008 != 0) {
                return in_stack_00000008;
              }
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar1 != iVar11);
      }
      in_stack_00000008 = 0;
    }
    return in_stack_00000008;
  }
LAB_036d2c60:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


