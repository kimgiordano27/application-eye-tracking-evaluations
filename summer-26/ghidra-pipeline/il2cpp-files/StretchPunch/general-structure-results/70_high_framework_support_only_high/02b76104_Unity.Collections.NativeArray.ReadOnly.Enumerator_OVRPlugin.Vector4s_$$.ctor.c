/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 02b76104
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4s>___ctor(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  int in_w8;
  long lVar4;
  uint in_w9;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  uint uVar7;
  int iVar8;
  
  uVar7 = unaff_w24 - in_w8 * in_w9;
  if (uVar7 < in_w9) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
                    /* try { // try from 02b76118 to 02c7611b has its CatchHandler @ 02b76128 */
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar7 = *(int *)(unaff_x22 + (ulong)uVar7 * 4 + 0x20) - 1;
    if (uVar7 < uVar1) {
      iVar8 = 0;
      do {
        if (*(int *)(unaff_x23 + (long)(int)uVar7 * 0x20 + 0x20) == unaff_w24) {
          lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01dde7f8(lVar3);
          }
          lVar4 = *unaff_x21;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == lVar3) {
                puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_02b761b0;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)FUN_01dde8fc();
LAB_02b761b0:
          uVar5 = (*(code *)*puVar2)();
          if ((uVar5 & 1) != 0) {
            return uVar7;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= uVar7) goto LAB_02b76228;
        uVar7 = *(uint *)(unaff_x23 + (long)(int)uVar7 * 0x20 + 0x24);
        if ((int)uVar1 <= iVar8) {
          FUN_033b37f8(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar8 = iVar8 + 1;
      } while (uVar7 < uVar1);
    }
    return uVar7;
  }
LAB_02b76228:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


