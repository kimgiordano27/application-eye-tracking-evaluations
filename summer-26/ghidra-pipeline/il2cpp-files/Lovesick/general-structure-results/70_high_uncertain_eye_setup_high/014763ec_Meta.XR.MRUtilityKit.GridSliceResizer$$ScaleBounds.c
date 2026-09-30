/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.GridSliceResizer$$ScaleBounds
ENTRY_POINT: 014763ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_GridSliceResizer__ScaleBounds(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long lVar7;
  long unaff_x21;
  long *unaff_x22;
  
  lVar5 = FUN_00d5941c();
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if ((*(byte *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x10) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  FUN_026df030();
  FUN_026df9cc(0);
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_00d59478(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  FUN_026df6f0(**(undefined8 **)(lVar5 + 0xb8),0);
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_00d59478(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar2 = Method_System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_Add__;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  FUN_026df030(*(undefined8 *)puVar2,**(undefined8 **)(lVar5 + 0xb8),0);
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_00d59478(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar2 = System_Action<PlayableDirector>_TypeInfo;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  uVar6 = FUN_026df230(*(undefined8 *)puVar2,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_01476ba4;
    if (*(int *)(*(long *)(unaff_x19 + 0x18) + 0x18) == 0) goto LAB_01476ba8;
    FUN_01476bac(0x3f800000,0,0,0x3f800000);
  }
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_00d59478(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar3 = System_IO_Compression_DeflateStreamNative_TypeInfo;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  uVar6 = FUN_026df230(*(undefined8 *)puVar3,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_01476ba4;
    if (*(int *)(*(long *)(unaff_x19 + 0x18) + 0x18) == 0) goto LAB_01476ba8;
    FUN_01476bac(0,0x3f800000,0,0x3f800000);
  }
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_00d59478(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar1 = PTR_DAT_033f0280;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  uVar6 = FUN_026df230(*(undefined8 *)puVar1,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_01476ba4;
    if (*(int *)(*(long *)(unaff_x19 + 0x18) + 0x18) == 0) goto LAB_01476ba8;
    FUN_01476bac(0,0,0x3f800000,0x3f800000);
  }
  FUN_026df9cc(0);
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_00d59478(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  FUN_026df6f0(**(undefined8 **)(lVar5 + 0xb8),0);
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_00d59478(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar4 = Method_System_Collections_Generic_List<PanelSettings>__ctor__;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  FUN_026df030(*(undefined8 *)puVar4,**(undefined8 **)(lVar5 + 0xb8),0);
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_00d59478(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  uVar6 = FUN_026df230(*(undefined8 *)puVar2,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_01476ba4;
    if (*(uint *)(*(long *)(unaff_x19 + 0x18) + 0x18) < 2) goto LAB_01476ba8;
    FUN_01476bac(0x3f800000,0,0,0x3f800000);
  }
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_00d59478(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  uVar6 = FUN_026df230(*(undefined8 *)puVar3,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_01476ba4;
    if (*(uint *)(*(long *)(unaff_x19 + 0x18) + 0x18) < 2) goto LAB_01476ba8;
    FUN_01476bac(0,0x3f800000,0,0x3f800000);
  }
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_00d59478(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  uVar6 = FUN_026df230(*(undefined8 *)puVar1,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_01476ba4;
    if (*(uint *)(*(long *)(unaff_x19 + 0x18) + 0x18) < 2) goto LAB_01476ba8;
    FUN_01476bac(0,0,0x3f800000,0x3f800000);
  }
  FUN_026df9cc(0);
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_00d59478(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  FUN_026df6f0(**(undefined8 **)(lVar5 + 0xb8),0);
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_00d59478(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar4 = StringLiteral_11738;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  FUN_026df030(*(undefined8 *)puVar4,**(undefined8 **)(lVar5 + 0xb8),0);
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_00d59478(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  uVar6 = FUN_026df230(*(undefined8 *)puVar2,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_01476ba4;
    if (*(uint *)(*(long *)(unaff_x19 + 0x18) + 0x18) < 3) goto LAB_01476ba8;
    FUN_01476bac(0x3f800000,0,0,0x3f800000);
  }
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_00d59478(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  uVar6 = FUN_026df230(*(undefined8 *)puVar3,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_01476ba4;
    if (*(uint *)(*(long *)(unaff_x19 + 0x18) + 0x18) < 3) goto LAB_01476ba8;
    FUN_01476bac(0,0x3f800000,0,0x3f800000);
  }
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_00d59478(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  uVar6 = FUN_026df230(*(undefined8 *)puVar1,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x18) == 0) {
LAB_01476ba4:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(*(long *)(unaff_x19 + 0x18) + 0x18) < 3) {
LAB_01476ba8:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    FUN_01476bac(0,0,0x3f800000,0x3f800000);
  }
  FUN_026df9cc(0);
  return;
}


