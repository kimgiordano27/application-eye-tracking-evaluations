/*
FUNCTION_NAME: FUN_034aafc0
ENTRY_POINT: 034aafc0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x034ab200) */

ulong FUN_034aafc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  uint local_48;
  char local_44 [4];
  
  puVar1 = Method_System_Globalization_TextInfo__ctor__;
  if ((DAT_04832c07 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Globalization_TextInfo__ctor__);
    DAT_04832c07 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  iVar3 = FUN_034abafc(param_2);
  iVar15 = *(int *)(param_1 + 0x68) + -1;
  if (-1 < iVar15) {
    iVar13 = 0;
    do {
      while( true ) {
        iVar6 = iVar13 + iVar15 >> 1;
                    /* try { // try from 034ab03c to 035ab043 has its CatchHandler @ 034ab198 */
        iVar4 = FUN_034acfc8(param_1,iVar6);
        if (iVar4 == iVar3) {
          iVar4 = iVar13;
          iVar2 = iVar6;
          if (iVar13 == iVar6) goto LAB_034ab0b0;
          goto LAB_034ab08c;
        }
        if (iVar4 < iVar3) break;
        iVar15 = iVar6 + -1;
        if (iVar6 <= iVar13) {
          return 0xffffffff;
        }
      }
      iVar13 = iVar6 + 1;
                    /* try { // try from 034ab05c to 035ab05f has its CatchHandler @ 034ab190 */
    } while (iVar6 < iVar15);
  }
  return 0xffffffff;
  while (iVar5 = FUN_034acfc8(param_1,iVar13 + -1), iVar2 = iVar13 + -1, iVar5 == iVar3) {
LAB_034ab08c:
    iVar13 = iVar2;
    iVar4 = iVar6;
    if (iVar13 < 1) break;
  }
LAB_034ab0b0:
  if (iVar15 != iVar6) {
    do {
      iVar15 = iVar4;
      if (*(int *)(param_1 + 0x68) + -1 <= iVar15) break;
      iVar6 = FUN_034acfc8(param_1,iVar15 + 1);
      iVar4 = iVar15 + 1;
    } while (iVar6 == iVar3);
  }
  local_44[0] = '\0';
  FUN_035ce230(param_1,local_44,0);
  do {
    if (iVar15 < iVar13) {
                    /* try { // try from 034ab160 to 035ab163 has its CatchHandler @ 034ab2b0 */
                    /* try { // try from 034ab164 to 035ab167 has its CatchHandler @ 034ab2ac */
      uVar9 = 0xffffffff;
                    /* try { // try from 034ab168 to 035ab16b has its CatchHandler @ 034ab2a8 */
LAB_034ab1c4:
      if (local_44[0] != '\0') {
                    /* try { // try from 034ab1cc to 035ab263 has its CatchHandler @ 034aa5f8 */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(param_1,0);
      }
      return uVar9;
    }
    plVar8 = *(long **)(param_1 + 0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    lVar14 = *(long *)(param_1 + 0x20);
    iVar3 = FUN_034ad00c(param_1,iVar13);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar8 + 0x308))(plVar8,lVar14 + iVar3,0,*(undefined8 *)(*plVar8 + 0x310));
                    /* try { // try from 034ab14c to 035ab157 has its CatchHandler @ 034ab2cc */
    uVar9 = FUN_034ad23c(param_1,param_2);
    if ((uVar9 & 1) != 0) {
                    /* try { // try from 034ab16c to 035ab16f has its CatchHandler @ 034ab2a4 */
      plVar8 = *(long **)(param_1 + 0x10);
                    /* try { // try from 034ab170 to 035ab173 has its CatchHandler @ 034ab2a0 */
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
                    /* try { // try from 034ab174 to 035ab177 has its CatchHandler @ 034ab284 */
                    /* try { // try from 034ab178 to 035ab18b has its CatchHandler @ 034aa5f8 */
      uVar7 = (**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230));
      uVar9 = (ulong)uVar7;
      if (-1 < (int)uVar7) {
                    /* try { // try from 034ab18c to 035ab18f has its CatchHandler @ 034ab19c */
        plVar8 = *(long **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 034ab05c with catch @ 034ab190
                       try { // try from 034ab190 to 035ab1b3 has its CatchHandler @ 034aa5f8 */
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
                    /* catch() { ... } // from try @ 034ab060 with catch @ 034ab194 */
                    /* catch() { ... } // from try @ 034ab03c with catch @ 034ab198 */
                    /* catch() { ... } // from try @ 034ab18c with catch @ 034ab19c */
        plVar8 = (long *)(**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
                    /* try { // try from 034ab1b4 to 035ab1cb has its CatchHandler @ 034ab274 */
        if ((long)uVar9 < lVar14 - *(long *)(param_1 + 0x28)) goto LAB_034ab1c4;
      }
      uVar10 = thunk_FUN_01efb3a4(
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                 );
      plVar8 = (long *)FUN_01f08890(uVar10,1);
      local_48 = uVar7;
      uVar10 = thunk_FUN_01efb3a4(
                                 Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                 );
      lVar14 = thunk_FUN_01f113fc(uVar10,&local_48);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
                    /* try { // try from 034ab264 to 035ab273 has its CatchHandler @ 034ab274 */
      if ((lVar14 != 0) &&
         (lVar11 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
                    /* catch() { ... } // from try @ 034ab1b4 with catch @ 034ab274
                       catch() { ... } // from try @ 034ab264 with catch @ 034ab274 */
        uVar10 = PrefabSceneManager__LoadSceneAsync();
                    /* try { // try from 034ab278 to 035ab27b has its CatchHandler @ 034ab384 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034ab27c to 035ab2df has its CatchHandler @ 034aa5f8 */
        FUN_01f08910(uVar10,0);
      }
      if ((int)plVar8[3] != 0) {
                    /* catch() { ... } // from try @ 034aaa5c with catch @ 034ab280 */
                    /* catch() { ... } // from try @ 034ab174 with catch @ 034ab284 */
        plVar8[4] = lVar14;
                    /* catch() { ... } // from try @ 034aa980 with catch @ 034ab28c */
        thunk_FUN_01f51358(plVar8 + 4,lVar14);
                    /* catch() { ... } // from try @ 034aa9a8 with catch @ 034ab290 */
                    /* catch() { ... } // from try @ 034aa988 with catch @ 034ab294 */
                    /* catch() { ... } // from try @ 034aa940 with catch @ 034ab298 */
        uVar10 = thunk_FUN_01efb3a4(
                                   Method_UnityEngine_UIElements_TextSelectingManipulator_OnRevealCursor__
                                   );
                    /* catch() { ... } // from try @ 034aa94c with catch @ 034ab29c */
                    /* catch() { ... } // from try @ 034ab170 with catch @ 034ab2a0 */
                    /* catch() { ... } // from try @ 034ab16c with catch @ 034ab2a4 */
        uVar10 = FUN_035ae81c(uVar10,plVar8,0);
                    /* catch() { ... } // from try @ 034ab168 with catch @ 034ab2a8 */
                    /* catch() { ... } // from try @ 034ab164 with catch @ 034ab2ac */
                    /* catch() { ... } // from try @ 034ab160 with catch @ 034ab2b0 */
                    /* catch() { ... } // from try @ 034aa904 with catch @ 034ab2b4 */
        thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_ReflectField__);
                    /* catch() { ... } // from try @ 034aa8a8 with catch @ 034ab2b8 */
        uVar12 = thunk_FUN_01f117cc();
                    /* catch() { ... } // from try @ 034aaa24 with catch @ 034ab2bc */
                    /* catch() { ... } // from try @ 034aaa30 with catch @ 034ab2c0 */
                    /* catch() { ... } // from try @ 034ab158 with catch @ 034ab2c4 */
                    /* catch() { ... } // from try @ 034aaa10 with catch @ 034ab2c8 */
        FUN_03553fd0(uVar12,uVar10,0);
                    /* catch() { ... } // from try @ 034ab14c with catch @ 034ab2cc */
        uVar10 = thunk_FUN_01efb3a4(
                                   Method_UnityEngine_UIElements_TextSelectingManipulator_OnSelectIndexChange__
                                   );
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034ab2e0 to 035ab2e3 has its CatchHandler @ 034ab2f8 */
        FUN_01f08910(uVar12,uVar10);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
                    /* try { // try from 034ab158 to 035ab15b has its CatchHandler @ 034ab2c4 */
    iVar13 = iVar13 + 1;
                    /* try { // try from 034ab15c to 035ab15f has its CatchHandler @ 034aa5f8 */
  } while( true );
}


