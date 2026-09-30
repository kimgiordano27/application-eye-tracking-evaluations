/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 034c5fe8
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1
System_Array__IndexOf<OVRPlugin_Qpl_Annotation_Builder_Entry>
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (in_x9 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_034c6028;
      }
      in_x9 = in_x9 + -1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_034c6028:
  uVar2 = (*(code *)*puVar1)();
  if ((uVar2 & 1) == 0) {
    thunk_FUN_02c7737c(PTR_DAT_065c8580);
    uVar3 = thunk_FUN_02cea894();
    uVar4 = thunk_FUN_02c7737c(PTR_DAT_065ddf40);
    FUN_04f68668(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar3);
  }
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  *(undefined1 *)(unaff_x21 + 0x10) = 0;
  if ((*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x28) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  thunk_FUN_02cea894();
  FUN_047b0bd4();
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02ce0978(lVar5);
  }
  lVar6 = *unaff_x19;
  uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar2 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar5) {
        puVar1 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_034c60d8;
      }
      uVar2 = uVar2 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar2 != 0);
  }
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_034c60d8:
  (*(code *)*puVar1)();
  return *(undefined1 *)(unaff_x21 + 0x10);
}


