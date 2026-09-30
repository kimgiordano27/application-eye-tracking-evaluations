/*
FUNCTION_NAME: GLTFast.Schema.OcclusionTextureInfoBase$$GltfSerialize
ENTRY_POINT: 0557db20
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void GLTFast_Schema_OcclusionTextureInfoBase__GltfSerialize(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x19;
  long *unaff_x21;
  int iVar9;
  float fVar10;
  float in_s3;
  float unaff_s9;
  float unaff_s10;
  
  FUN_06dbea40();
  if (unaff_x21 != (long *)0x0) {
    lVar7 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_072814d8) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar6 + 0x1b) * 0x10 + 0x138);
          goto LAB_0557db8c;
        }
        uVar8 = uVar8 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_032937ac();
LAB_0557db8c:
    (*(code *)*puVar4)();
    if ((unaff_x19[2] != 0) && (lVar7 = *(long *)(unaff_x19[2] + 0x410), lVar7 != 0)) {
      FUN_06daadb4(lVar7,0);
      lVar7 = FUN_04dabe5c();
      if (lVar7 != 0) {
        in_s3 = unaff_s10 - in_s3;
        if (in_s3 <= 0.0) {
          in_s3 = 0.0;
        }
        fVar1 = *(float *)(lVar7 + 0x14);
        if (in_s3 <= *(float *)(lVar7 + 0x14)) {
          fVar1 = in_s3;
        }
        if (((unaff_x19[2] != 0) && (lVar7 = *(long *)(unaff_x19[2] + 0x420), lVar7 != 0)) &&
           (lVar7 = *(long *)(lVar7 + 0x3d0), lVar7 != 0)) {
          UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float2>__Dispose
                    (lVar7,*(undefined8 *)PTR_DAT_07285c08);
          if (((unaff_x19[2] != 0) && (lVar7 = *(long *)(unaff_x19[2] + 0x420), lVar7 != 0)) &&
             (plVar5 = *(long **)(lVar7 + 0x3d0), plVar5 != (long *)0x0)) {
            (**(code **)(*plVar5 + 0x8b8))(fVar1,plVar5,*(undefined8 *)(*plVar5 + 0x8c0));
            if (unaff_x19[4] != 0) {
              fVar10 = (float)FUN_06cb7ab4(unaff_x19[4],0);
              iVar2 = -0x80000000;
              if (fVar10 / unaff_s9 != INFINITY) {
                iVar2 = (int)(fVar10 / unaff_s9);
              }
              iVar9 = iVar2 + 2;
              if (iVar2 < 1) {
                iVar9 = iVar2;
              }
              iVar2 = FUN_04dabc1c();
              if (iVar2 <= iVar9) {
                iVar9 = iVar2;
              }
              iVar2 = (**(code **)(*unaff_x19 + 0x198))();
              if (iVar2 != iVar9) {
                iVar2 = (**(code **)(*unaff_x19 + 0x198))();
                iVar3 = (**(code **)(*unaff_x19 + 0x198))();
                if (iVar9 < iVar3) {
                  iVar2 = iVar2 - iVar9;
                  if (0 < iVar2) {
                    do {
                      if (unaff_x19[5] == 0) goto LAB_0557ddb8;
                      (**(code **)(*unaff_x19 + 0x2a8))();
                      iVar2 = iVar2 + -1;
                    } while (iVar2 != 0);
                  }
                }
                else {
                  iVar2 = (**(code **)(*unaff_x19 + 0x198))();
                  iVar9 = iVar9 - iVar2;
                  if (0 < iVar9) {
                    do {
                      (**(code **)(*unaff_x19 + 0x178))();
                      (**(code **)(*unaff_x19 + 0x298))();
                      FUN_04dac798();
                      iVar9 = iVar9 + -1;
                    } while (iVar9 != 0);
                  }
                }
              }
                    /* WARNING: Could not recover jumptable at 0x0557ddb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*unaff_x19 + 0x1d8))(0,fVar1);
              return;
            }
          }
        }
      }
    }
  }
LAB_0557ddb8:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


