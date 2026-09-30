/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$RegisterAnchorUpdates
ENTRY_POINT: 072ada20
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__RegisterAnchorUpdates(float param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint in_w8;
  ulong in_x9;
  ulong in_x10;
  uint uVar7;
  ulong in_x11;
  long in_x12;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  long *unaff_x23;
  int unaff_w24;
  float fVar10;
  float fVar11;
  
code_r0x072ada20:
  do {
    if (in_x11 == in_x9) {
LAB_072adb08:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    iVar3 = *(int *)(unaff_x19 + 0x50);
    fVar11 = *(float *)(in_x12 + 0x20 + in_x9 * 4);
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = (int)in_x9 / iVar3;
    }
    fVar10 = fVar11 * fVar11;
    if (fVar11 * fVar11 <= param_1) {
      fVar10 = param_1;
    }
    if ((int)in_x9 == iVar5 * iVar3) {
      lVar8 = *(long *)(unaff_x19 + 0x38);
      if (lVar8 == 0) goto LAB_072adb0c;
      if ((int)in_w8 < (int)*(uint *)(lVar8 + 0x18)) {
        if (*(uint *)(lVar8 + 0x18) <= in_w8) goto LAB_072adb08;
        lVar1 = (long)(int)in_w8;
        in_w8 = in_w8 + 1;
        *(float *)(lVar8 + lVar1 * 4 + 0x20) = fVar11;
      }
    }
    in_x9 = in_x9 + 1;
    param_1 = fVar10;
  } while (in_x10 != in_x9);
  do {
    lVar8 = unaff_x20[7];
    iVar3 = (int)unaff_x20[0xd] + 1;
    *(int *)(unaff_x20 + 0xd) = iVar3;
    if (lVar8 != 0) {
      (**(code **)(lVar8 + 0x18))
                (fVar10,*(undefined8 *)(lVar8 + 0x40),iVar3,*(undefined8 *)(unaff_x19 + 0x38),
                 *(undefined8 *)(lVar8 + 0x28));
    }
    *(int *)(unaff_x19 + 0x44) = unaff_w24;
    uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar6 = FUN_089ca704(uVar9,0,0);
    if ((uVar6 & 1) == 0) {
LAB_072adaec:
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x18),0);
      *(undefined4 *)(unaff_x19 + 0x10) = 1;
      return;
    }
    iVar3 = (**(code **)(*unaff_x20 + 0x2b8))();
    if (iVar3 < *(int *)(unaff_x19 + 0x48)) {
      *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x19 + 0x40) + 1;
    }
    *(int *)(unaff_x19 + 0x48) = iVar3;
    if (*(long *)(unaff_x19 + 0x30) == 0) {
LAB_072adb0c:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar5 = *(int *)(unaff_x19 + 0x40);
    iVar4 = FUN_089675ac(*(long *)(unaff_x19 + 0x30),0);
    iVar2 = *(int *)(unaff_x19 + 0x44);
    unaff_w24 = *(int *)(unaff_x19 + 0x4c) + iVar2;
    if (iVar3 + iVar4 * iVar5 <= unaff_w24) goto LAB_072adaec;
    lVar8 = *(long *)(unaff_x19 + 0x30);
    if (lVar8 == 0) goto LAB_072adb0c;
    uVar9 = *(undefined8 *)(unaff_x19 + 0x58);
    iVar5 = FUN_089675ac(lVar8,0);
    iVar3 = 0;
    if (iVar5 != 0) {
      iVar3 = iVar2 / iVar5;
    }
    FUN_089677c8(lVar8,uVar9,iVar2 - iVar3 * iVar5,0);
    in_x12 = *(long *)(unaff_x19 + 0x58);
    if (in_x12 == 0) goto LAB_072adb0c;
    uVar7 = (uint)*(ulong *)(in_x12 + 0x18);
    if (0 < (int)uVar7) break;
    fVar10 = 0.0;
  } while( true );
  param_1 = 0.0;
  in_x10 = (ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU));
  in_w8 = 0;
  in_x9 = 0;
  in_x11 = *(ulong *)(in_x12 + 0x18) & 0xffffffff;
  goto code_r0x072ada20;
}


