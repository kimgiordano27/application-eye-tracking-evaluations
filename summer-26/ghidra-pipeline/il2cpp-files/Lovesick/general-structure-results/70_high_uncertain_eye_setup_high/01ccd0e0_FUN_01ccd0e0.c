/*
FUNCTION_NAME: FUN_01ccd0e0
ENTRY_POINT: 01ccd0e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_01ccd0e0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [12];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
                    /* try { // try from 01ccd0e8 to 01dcd0eb has its CatchHandler @ 01ccd110 */
                    /* try { // try from 01ccd0ec to 01dcd0ef has its CatchHandler @ 01ccd10c */
                    /* try { // try from 01ccd0f0 to 01dcd0f3 has its CatchHandler @ 01ccd108 */
                    /* try { // try from 01ccd0f4 to 01dcd0f7 has its CatchHandler @ 01cccd4c */
                    /* try { // try from 01ccd0f8 to 01dcd0fb has its CatchHandler @ 01ccd104 */
                    /* try { // try from 01ccd0fc to 01dcd14b has its CatchHandler @ 01cccd4c */
  if ((DAT_0377f011 & 1) == 0) {
                    /* catch() { ... } // from try @ 01ccd0f8 with catch @ 01ccd104 */
                    /* catch() { ... } // from try @ 01ccd0f0 with catch @ 01ccd108 */
                    /* catch() { ... } // from try @ 01ccd0ec with catch @ 01ccd10c */
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_130__);
    thunk_FUN_00d48444(
                      DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_44_var
                      );
    thunk_FUN_00d48444(StringLiteral_605);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_SelectMany<Face,_Edge>__);
    thunk_FUN_00d48444(StringLiteral_11442);
    thunk_FUN_00d48444(Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass61_0_<DOJump>b__3__);
    DAT_0377f011 = 1;
  }
  puVar2 = Method_System_Linq_Enumerable_SelectMany<Face,_Edge>__;
  uStack_58 = 0;
  local_50 = 0;
  local_60 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    lVar5 = *(long *)Method_System_Linq_Enumerable_SelectMany<Face,_Edge>__;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar2;
    }
    return *(long *)(*(long *)(lVar5 + 0xb8) + 0x78);
  }
  lVar5 = FUN_00da4fb8(*(undefined8 *)
                        Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass61_0_<DOJump>b__3__,
                       *(int *)(param_1 + 0x30) + 1);
  puVar4 = StringLiteral_605;
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_130__;
  puVar2 = 
  DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_44_var
  ;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_01323390(*(long *)(param_1 + 0x38),&local_78,*(undefined8 *)StringLiteral_11442);
    uStack_58 = CONCAT44(uStack_6c,uStack_70);
    local_60 = local_78;
    local_50 = local_68;
    while (uVar6 = FUN_012b894c(&local_60,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
      lVar7 = FUN_00c3d660(&local_60,*(undefined8 *)puVar4);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar6 = FUN_01cc06d4(lVar7,0);
      if ((uVar6 & 1) != 0) {
        uVar1 = *(uint *)(lVar7 + 0x28);
        auVar8 = FUN_01cc06f0(lVar7,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        *(undefined1 (*) [12])(lVar5 + (long)(int)uVar1 * 0xc + 0x20) = auVar8;
      }
    }
    FUN_012b8948(&local_60,*(undefined8 *)puVar3);
    if (lVar5 != 0) {
      uStack_70 = 0;
      local_78 = 0;
      FUN_01cc05bc(&local_78,0x7fffffff,0,0,0);
      if ((int)*(long *)(lVar5 + 0x18) != 0) {
        lVar7 = lVar5 + ((*(long *)(lVar5 + 0x18) << 0x20) + -0x100000000 >> 0x20) * 0xc;
        *(undefined8 *)(lVar7 + 0x20) = local_78;
        *(undefined4 *)(lVar7 + 0x28) = uStack_70;
        return lVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


