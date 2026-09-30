/*
FUNCTION_NAME: TMPro.TMP_Text$$ReplaceTagWithCharacter
ENTRY_POINT: 06727574
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void TMPro_TMP_Text__ReplaceTagWithCharacter
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000e0;
  
  uStack00000000000000e0 = param_3._0_8_;
  uStack00000000000000d0 = param_2._0_8_;
  uStack00000000000000c0 = param_1._0_8_;
  lVar7 = *(long *)(unaff_x21 + 0x10);
  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
  if (lVar7 != 0) {
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      lVar7 = lVar7 + (long)(int)uVar1 * 0x30;
      *(long *)(lVar7 + 0x38) = param_2._8_8_;
      *(undefined8 *)(lVar7 + 0x30) = uStack00000000000000d0;
      *(long *)(lVar7 + 0x48) = param_3._8_8_;
      *(undefined8 *)(lVar7 + 0x40) = uStack00000000000000e0;
      *(long *)(lVar7 + 0x28) = param_1._8_8_;
      *(undefined8 *)(lVar7 + 0x20) = uStack00000000000000c0;
    }
    else {
      FUN_0419568c();
    }
    FUN_06719428();
    *(undefined1 *)(unaff_x20 + 0x90) = 1;
    FUN_0671b274();
    if (*unaff_x19 != 0) {
      iVar3 = FUN_06717ce0(*unaff_x19,0);
      puVar2 = Method_System_Collections_Generic_List_Enumerator<OvrAvatarJointPose>_get_Current__;
      if (iVar3 == 1) {
        if (((*unaff_x19 == 0) || (lVar7 = *(long *)(*unaff_x19 + 0x30), lVar7 == 0)) ||
           (lVar7 = FUN_041e29a8(lVar7,0,*(undefined8 *)
                                          Method_System_Collections_Generic_List_Enumerator<OvrAvatarJointPose>_get_Current__
                                ), lVar7 == 0)) goto LAB_067277d0;
        iVar3 = FUN_06717ce0(lVar7,0);
        if (0 < iVar3) {
          if ((*unaff_x19 != 0) && (lVar7 = *(long *)(*unaff_x19 + 0x30), lVar7 != 0)) {
            lVar7 = FUN_041e29a8(lVar7,0,*(undefined8 *)puVar2);
            if ((*unaff_x19 != 0) && (lVar7 != 0)) {
              lVar8 = *(long *)(*unaff_x19 + 0x30);
              uVar4 = FUN_06717ce0(lVar7,0);
              if (lVar8 != 0) {
                FUN_041e27fc(lVar8,uVar4,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List_Enumerator<PostProcessBundle>_get_Current__
                            );
                if ((*unaff_x19 != 0) && (*(long *)(lVar7 + 0x30) != 0)) {
                  lVar8 = *(long *)(*unaff_x19 + 0x30);
                  uVar6 = FUN_041e29a8(*(long *)(lVar7 + 0x30),0,*(undefined8 *)puVar2);
                  if (lVar8 != 0) {
                    FUN_041e29fc(lVar8,0,uVar6,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<OvrAvatarJointPose>_MoveNext__
                                );
                    if (((*unaff_x19 != 0) && (lVar8 = *(long *)(*unaff_x19 + 0x30), lVar8 != 0)) &&
                       (lVar8 = FUN_041e29a8(lVar8,0,*(undefined8 *)puVar2), lVar8 != 0)) {
                      *(long *)(lVar8 + 0x10) = *unaff_x19;
                      thunk_FUN_0333a630();
                      iVar3 = FUN_06717ce0(lVar7,0);
                      if (iVar3 < 2) {
                        return;
                      }
                      iVar3 = 1;
                      while (*(long *)(lVar7 + 0x30) != 0) {
                        lVar8 = *unaff_x19;
                        uVar6 = FUN_041e29a8(*(long *)(lVar7 + 0x30),iVar3,*(undefined8 *)puVar2);
                        if (lVar8 == 0) break;
                        FUN_06717d30(lVar8,uVar6,0);
                        iVar3 = iVar3 + 1;
                        iVar5 = FUN_06717ce0(lVar7,0);
                        if (iVar5 <= iVar3) {
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_067277d0;
        }
      }
      if (*unaff_x19 != 0) {
        FUN_06717958(*unaff_x19,0);
        return;
      }
    }
  }
LAB_067277d0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


