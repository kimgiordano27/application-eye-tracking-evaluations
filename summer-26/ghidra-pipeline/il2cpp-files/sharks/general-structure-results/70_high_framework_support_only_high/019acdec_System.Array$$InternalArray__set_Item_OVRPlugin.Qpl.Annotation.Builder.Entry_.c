/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 019acdec
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__set_Item<OVRPlugin_Qpl_Annotation_Builder_Entry>(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  byte unaff_w20;
  undefined8 uVar8;
  int unaff_w21;
  long unaff_x26;
  undefined8 *puVar9;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  puVar3 = PTR_DAT_037f3fb8;
  puVar2 = PTR_DAT_037f3d10;
  puVar9 = *(undefined8 **)(unaff_x26 + 0xfc0);
  uVar5 = FUN_0199e5c8();
                    /* try { // try from 019ace14 to 01aace23 has its CatchHandler @ 019acf28 */
  *(undefined8 *)(unaff_x19 + 0x28) = uVar5;
  thunk_FUN_0188fd20();
  uVar5 = thunk_FUN_01861bbc(*unaff_x28);
                    /* try { // try from 019ace30 to 01aace37 has its CatchHandler @ 019acf14 */
  FUN_020c0800();
  uVar6 = thunk_FUN_01861bbc(*unaff_x27);
                    /* try { // try from 019ace40 to 01aace5b has its CatchHandler @ 019acee8 */
  FUN_020c1aec();
  lVar7 = FUN_0199cde4(0,uVar5,uVar6);
  bVar1 = unaff_w20 & 1;
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) {
    *(undefined4 *)(lVar7 + 0x148) = 4;
    *(byte *)(lVar7 + 0x14c) = bVar1;
  }
  uVar5 = FUN_01bd3d74(lVar7,6,*(undefined8 *)PTR_DAT_037f3fb0);
  uVar5 = FUN_01bd4278(uVar5,*puVar9);
  uVar5 = FUN_01bd41f0(uVar5,unaff_w21 << 1,1,*(undefined8 *)puVar3);
  uVar6 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
                    /* try { // try from 019acedc to 01aacedf has its CatchHandler @ 019acf30 */
                    /* try { // try from 019acee0 to 01aacee3 has its CatchHandler @ 019acf2c */
  FUN_0199b2f4();
                    /* try { // try from 019acee4 to 01aacf47 has its CatchHandler @ 019acc88 */
                    /* catch() { ... } // from try @ 019ace40 with catch @ 019acee8 */
  uVar5 = FUN_01bd3670(uVar5,uVar6,*(undefined8 *)PTR_DAT_037f3f98);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar5;
  thunk_FUN_0188fd20();
  uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
                    /* catch() { ... } // from try @ 019ace30 with catch @ 019acf14 */
  uVar5 = thunk_FUN_01861bbc(*unaff_x28);
                    /* catch() { ... } // from try @ 019ace14 with catch @ 019acf28 */
                    /* catch() { ... } // from try @ 019acdcc with catch @ 019acf2c
                       catch() { ... } // from try @ 019acee0 with catch @ 019acf2c */
                    /* catch() { ... } // from try @ 019acd54 with catch @ 019acf30
                       catch() { ... } // from try @ 019acedc with catch @ 019acf30 */
  FUN_020c0800();
  uVar6 = thunk_FUN_01861bbc(*unaff_x27);
                    /* catch() { ... } // from try @ 019ad2ec with catch @ 019acf48 */
  FUN_020c1aec();
  lVar7 = FUN_0199cde4(*(undefined4 *)(unaff_x19 + 0x30),0,0,uVar5,uVar6);
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) {
    *(undefined4 *)(lVar7 + 0x148) = 2;
    *(byte *)(lVar7 + 0x14c) = bVar1;
  }
  puVar4 = PTR_DAT_037f3fc8;
  puVar3 = PTR_DAT_037f3fa8;
  uVar5 = FUN_01bd3d74(lVar7,1,*(undefined8 *)PTR_DAT_037f3fb0);
  FUN_019acb7c(uVar8,uVar5);
  uVar5 = thunk_FUN_01861bbc(*unaff_x28);
  FUN_020c0800();
  uVar6 = thunk_FUN_01861bbc(*unaff_x27);
  FUN_020c1aec();
  lVar7 = FUN_0199cde4(0,0,*(undefined4 *)(unaff_x19 + 0x38),uVar5,uVar6);
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) {
    *(undefined4 *)(lVar7 + 0x148) = 8;
    *(byte *)(lVar7 + 0x14c) = bVar1;
  }
  uVar5 = FUN_01bd3d74(lVar7,1,*(undefined8 *)PTR_DAT_037f3fb0);
  uVar5 = FUN_019acbc0(uVar8,uVar5);
  uVar5 = FUN_019acbc0(uVar5,*(undefined8 *)(unaff_x19 + 0x40));
  uVar5 = FUN_01bd4328(uVar5,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)puVar4);
  FUN_01bd3d74(uVar5,*(undefined4 *)(*(long *)(*(long *)PTR_DAT_037f3e88 + 0xb8) + 0x54),
               *(undefined8 *)puVar3);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar5 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
  FUN_0199b2f4();
  FUN_01bd36c8(uVar6,uVar5,*(undefined8 *)PTR_DAT_037f3fa0);
  return *(undefined8 *)(unaff_x19 + 0x28);
}


