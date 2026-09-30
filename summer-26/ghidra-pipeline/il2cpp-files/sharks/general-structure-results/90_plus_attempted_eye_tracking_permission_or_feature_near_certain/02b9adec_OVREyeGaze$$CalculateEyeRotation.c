/*
FUNCTION_NAME: OVREyeGaze$$CalculateEyeRotation
ENTRY_POINT: 02b9adec
PROGRAM: sharks-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__CalculateEyeRotation(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong unaff_x19;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  int iVar9;
  long *plVar10;
  uint uVar11;
  
  lVar5 = FUN_02a51d10(param_1,unaff_w22,unaff_w21,0);
  puVar3 = PTR_DAT_03808d38;
  puVar2 = PTR_DAT_037f6f08;
  if (lVar5 != 0) {
    if (0 < *(int *)(lVar5 + 0x10)) {
      iVar9 = 0;
      do {
        uVar4 = FUN_02a4b568(lVar5,iVar9,0);
        if (0x7f < uVar4) {
          if (*(int *)(*(long *)PTR_DAT_037f4460 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          uVar6 = FUN_02b954e8();
          lVar5 = FUN_02a54144(lVar5,uVar6,0);
          break;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(lVar5 + 0x10));
    }
    uVar6 = FUN_017fc3f4(*(undefined8 *)puVar2,4);
    FUN_02b00b24(uVar6,*(undefined8 *)puVar3,0);
    if ((lVar5 != 0) && (lVar5 = FUN_02a52960(lVar5,uVar6,0), lVar5 != 0)) {
      uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
      if (0 < (int)*(uint *)(lVar5 + 0x18)) {
        uVar11 = 0;
        do {
          if ((uint)uVar8 <= uVar11) {
LAB_02b9af7c:
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          plVar10 = (long *)(lVar5 + (long)(int)uVar11 * 8 + 0x20);
          if (*plVar10 == 0) goto LAB_02b9af80;
          uVar1 = uVar11 + 1;
          if ((uVar1 != (uint)uVar8) || (*(int *)(*plVar10 + 0x10) != 0)) {
            if ((unaff_x19 & 1) == 0) {
              lVar7 = FUN_02b9b1b8();
            }
            else {
              lVar7 = FUN_02b9af84();
            }
            if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_02b9af7c;
            *plVar10 = lVar7;
            thunk_FUN_0188fd20(plVar10,lVar7);
          }
          uVar8 = *(ulong *)(lVar5 + 0x18);
          if ((uint)uVar8 <= uVar11) goto LAB_02b9af7c;
          if (*plVar10 == 0) goto LAB_02b9af80;
          uVar11 = uVar1;
        } while ((int)uVar1 < (int)(uint)uVar8);
      }
                    /* try { // try from 02b9af78 to 02c9b0b3 has its CatchHandler @ 02b9af78
                       catch() { ... } // from try @ 02b9af78 with catch @ 02b9af78
                       catch() { ... } // from try @ 02b9b158 with catch @ 02b9af78
                       catch() { ... } // from try @ 02b9b1f0 with catch @ 02b9af78
                       catch() { ... } // from try @ 02b9b2ec with catch @ 02b9af78 */
      FUN_02a50f24(*(undefined8 *)PTR_DAT_037f47d0,lVar5,0);
      return;
    }
  }
LAB_02b9af80:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


