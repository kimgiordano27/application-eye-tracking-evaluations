/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0196e1bc
PROGRAM: sharks-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_SpaceQueryResult>
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  
  if (param_4 <= param_2) {
    param_1 = param_1 * param_3;
  }
  if (*(int *)(param_5 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    param_5 = *unaff_x21;
  }
  if (*(char *)(*(long *)(param_5 + 0xb8) + 0x8a) != '\0') {
    unaff_s11 = -unaff_s11;
  }
  if (DAT_03a221f2 == '\0') {
    FUN_017fc350(PTR_DAT_037f50d8);
    DAT_03a221f2 = '\x01';
  }
  if ((**(long **)(*(long *)PTR_DAT_037f50d8 + 0xb8) != 0) &&
     (lVar1 = FUN_03198300(**(long **)(*(long *)PTR_DAT_037f50d8 + 0xb8),0), lVar1 != 0)) {
    uVar2 = FUN_0316ef04(lVar1,0);
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0xc0) = 0;
    }
    if (*(char *)(unaff_x20 + 0x1f5) == '\0') {
      FUN_017fc350(PTR_DAT_037f5100);
      *(undefined1 *)(unaff_x20 + 0x1f5) = 1;
    }
    fVar3 = unaff_s8 * unaff_s10 - **(float **)(*(long *)PTR_DAT_037f5100 + 0xb8);
    fVar6 = unaff_s11 - (*(float **)(*(long *)PTR_DAT_037f5100 + 0xb8))[1];
    if ((DAT_009a6238 <= fVar3 * fVar3 + fVar6 * fVar6) && (*(char *)(unaff_x19 + 0xc0) != '\0')) {
      *(float *)(unaff_x19 + 0x90) =
           *(float *)(unaff_x19 + 0x90) +
           param_1 * unaff_s8 * unaff_s10 * *(float *)(unaff_x19 + 0x50);
      *(float *)(unaff_x19 + 0x94) =
           *(float *)(unaff_x19 + 0x94) + param_1 * unaff_s11 * *(float *)(unaff_x19 + 0x50) * 0.5;
    }
    uVar10 = (ulong)(uint)DAT_009a6334;
    uVar2 = (ulong)(uint)(*(float *)(unaff_x19 + 0x90) * DAT_009a6334);
    uVar8 = 0;
    uVar4 = FUN_033de310(*(float *)(unaff_x19 + 0x94) * DAT_009a62e8,uVar2,0,0);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if (lVar1 != 0) {
      uVar7 = uVar2;
      uVar9 = uVar8;
      uVar11 = uVar10;
      uVar5 = FUN_033f30a4(lVar1,0);
      FUN_033eff68(0);
      FUN_033de094(uVar5,uVar7,uVar9,uVar11,uVar4,uVar2,uVar8,uVar10,0);
      FUN_033f312c(lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


