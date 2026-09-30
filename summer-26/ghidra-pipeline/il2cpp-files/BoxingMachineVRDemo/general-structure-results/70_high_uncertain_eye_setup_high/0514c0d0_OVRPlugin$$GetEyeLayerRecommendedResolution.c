/*
FUNCTION_NAME: OVRPlugin$$GetEyeLayerRecommendedResolution
ENTRY_POINT: 0514c0d0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetEyeLayerRecommendedResolution(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0xff8));
  FUN_02d6084c(PTR_DAT_067810c0);
  *(undefined1 *)(unaff_x22 + 0xdd2) = 1;
  if (unaff_x20 == (long *)0x0) {
LAB_0514c150:
    if ((unaff_x21 == 0) || (*(char *)(unaff_x21 + 0x20) == '\0')) {
                    /* try { // try from 0514c164 to 0524c167 has its CatchHandler @ 0514c194 */
                    /* try { // try from 0514c168 to 0524c173 has its CatchHandler @ 0514c198 */
      return 0;
    }
    thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
    FUN_028f4b80();
    uVar4 = FUN_04f8e414(0);
    uVar5 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x48),&stack0x0000000c);
    FUN_028f4e40();
    plVar6 = (long *)thunk_FUN_02d709fc();
    FUN_028f4e40();
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    uVar8 = thunk_FUN_02dc61f4(PTR_DAT_06781ce0);
    uVar4 = FUN_050f0fe0(uVar8,uVar4,uVar5,uVar7,0);
  }
  else {
    lVar9 = *unaff_x20;
                    /* try { // try from 0514c0fc to 0524c107 has its CatchHandler @ 0514c190 */
    bVar1 = *(byte *)(*(long *)PTR_DAT_06780ff8 + 0x130);
                    /* try { // try from 0514c10c to 0524c117 has its CatchHandler @ 0514c18c */
                    /* try { // try from 0514c118 to 0524c163 has its CatchHandler @ 0514bf44 */
    if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06780ff8)) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_067810c0 + 0x130);
      if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_067810c0))
      goto LAB_0514c150;
      iVar2 = FUN_0512edb8();
      if (unaff_w19 < iVar2) {
                    /* try { // try from 0514c1b4 to 0524c1b7 has its CatchHandler @ 0514c1e4 */
                    /* try { // try from 0514c1b8 to 0524c1f3 has its CatchHandler @ 0514bf44 */
        thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x48),&stack0x0000000c);
        uVar4 = (**(code **)(*unaff_x20 + 0x248))();
        return uVar4;
                    /* catch() { ... } // from try @ 0514c1b4 with catch @ 0514c1e4 */
      }
      if (unaff_x21 == 0) {
        return 0;
      }
      if (*(char *)(unaff_x21 + 0x20) == '\0') {
        return 0;
      }
      thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
      FUN_028f4b80();
      uVar4 = FUN_04f8e414(0);
      uVar5 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x48),&stack0x0000000c);
      puVar3 = PTR_DAT_06781cd8;
    }
    else {
                    /* try { // try from 0514c174 to 0524c177 has its CatchHandler @ 0514c188 */
                    /* try { // try from 0514c178 to 0524c17b has its CatchHandler @ 0514c180 */
      iVar2 = FUN_0512edb8();
                    /* try { // try from 0514c17c to 0524c1b3 has its CatchHandler @ 0514bf44 */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0514c178 with catch @ 0514c180
                        */
      if (unaff_w19 < iVar2) {
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0514c088 with catch @ 0514c184
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0514c174 with catch @ 0514c188
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0514c10c with catch @ 0514c18c
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0514c0fc with catch @ 0514c190
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0514c164 with catch @ 0514c194
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0514c168 with catch @ 0514c198
                        */
        uVar4 = FUN_05128104();
        return uVar4;
      }
      if (unaff_x21 == 0) {
        return 0;
      }
      if (*(char *)(unaff_x21 + 0x20) == '\0') {
        return 0;
      }
                    /* try { // try from 0514c1f4 to 0524c1ff has its CatchHandler @ 0514c214 */
      thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
                    /* try { // try from 0514c200 to 0524c20b has its CatchHandler @ 0514bf44 */
      FUN_028f4b80();
      uVar4 = FUN_04f8e414(0);
                    /* try { // try from 0514c20c to 0524c213 has its CatchHandler @ 0514c214 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0514c1f4 with catch @ 0514c214
                       catch(type#2 @ 00000000) { ... } // from try @ 0514c20c with catch @ 0514c214
                        */
      uVar5 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x48),&stack0x0000000c);
      puVar3 = PTR_DAT_06781cd0;
    }
    uVar7 = thunk_FUN_02dc61f4(puVar3);
    uVar4 = FUN_050f0ec0(uVar7,uVar4,uVar5,0);
  }
  thunk_FUN_02dc61f4(PTR_DAT_0677d960);
  uVar5 = thunk_FUN_02d9d534();
  FUN_050931fc(uVar5,uVar4,0);
  uVar4 = thunk_FUN_02dc61f4(PTR_DAT_06781ce8);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar5,uVar4);
}


