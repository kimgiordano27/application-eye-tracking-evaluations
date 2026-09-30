/*
FUNCTION_NAME: OVRPlugin.Vector4s$$ToString
ENTRY_POINT: 069647f4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4s__ToString
               (undefined1 param_1 [16],undefined4 param_2,float param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *plVar12;
  undefined4 uVar13;
  float fVar14;
  float unaff_s8;
  float unaff_s9;
  float fVar15;
  float fVar16;
  
  plVar12 = (long *)(unaff_x22 + 0x58);
  *plVar12 = param_4;
  thunk_FUN_03afed3c(plVar12,param_4);
                    /* try { // try from 06964808 to 06a6480b has its CatchHandler @ 06964a9c */
  lVar6 = FUN_07c98f88();
  if (lVar6 != 0) {
    uVar13 = FUN_07cac280(lVar6,0);
    *(undefined4 *)(unaff_x19 + 0x60) = uVar13;
    *(undefined4 *)(unaff_x19 + 100) = param_2;
                    /* try { // try from 06964824 to 06a64843 has its CatchHandler @ 06964a70 */
    *(float *)(unaff_x19 + 0x68) = param_3;
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      iVar4 = thunk_FUN_07d50a28(*(long *)(unaff_x19 + 0x58),0);
      if (*plVar12 != 0) {
        iVar5 = thunk_FUN_07d50a28(*plVar12,0);
                    /* try { // try from 06964850 to 06a64857 has its CatchHandler @ 06964a64 */
        if (*plVar12 != 0) {
          fVar15 = *(float *)(unaff_x19 + 0x60);
                    /* try { // try from 06964864 to 06a6486f has its CatchHandler @ 06964a98 */
          fVar14 = (float)FUN_07d4f4e0(*plVar12,0);
          if (*(long *)(unaff_x19 + 0x58) != 0) {
            fVar16 = *(float *)(unaff_x19 + 0x68);
                    /* try { // try from 0696487c to 06a64883 has its CatchHandler @ 06964a94 */
            FUN_07d4f4e0(*(long *)(unaff_x19 + 0x58),0);
            if (*(long *)(unaff_x19 + 0x58) != 0) {
                    /* try { // try from 0696488c to 06a64893 has its CatchHandler @ 06964a8c */
                    /* try { // try from 069648ac to 06a648af has its CatchHandler @ 06964a60 */
                    /* try { // try from 069648b0 to 06a648bf has its CatchHandler @ 06964a88 */
              fVar16 = ((unaff_s9 - fVar16) / param_3) * (float)iVar5;
              iVar1 = -0x80000000;
              if (fVar16 != INFINITY) {
                iVar1 = (int)fVar16;
              }
              fVar14 = ((unaff_s8 - fVar15) / fVar14) * (float)iVar4;
              iVar2 = iVar1;
              if (iVar5 + -1 <= iVar1) {
                iVar2 = iVar5 + -1;
              }
                    /* try { // try from 069648d8 to 06a648db has its CatchHandler @ 06964a9c */
                    /* try { // try from 069648dc to 06a648df has its CatchHandler @ 06964a84 */
              iVar5 = 0;
              if (-1 < iVar1) {
                iVar5 = iVar2;
              }
              iVar1 = -0x80000000;
              if (fVar14 != INFINITY) {
                iVar1 = (int)fVar14;
              }
                    /* try { // try from 069648ec to 06a648f3 has its CatchHandler @ 06964a7c */
              iVar2 = iVar1;
              if (iVar4 + -1 <= iVar1) {
                iVar2 = iVar4 + -1;
              }
              iVar4 = 0;
              if (-1 < iVar1) {
                iVar4 = iVar2;
              }
              lVar6 = FUN_07d5088c(*(long *)(unaff_x19 + 0x58),iVar4,iVar5,1,1,0);
                    /* try { // try from 06964904 to 06a6490f has its CatchHandler @ 06964a74 */
              plVar12 = (long *)(unaff_x19 + 0x50);
              *plVar12 = lVar6;
              thunk_FUN_03afed3c(plVar12,lVar6);
              puVar3 = PTR_DAT_08486bf8;
              if (*plVar12 != 0) {
                    /* try { // try from 06964928 to 06a6492b has its CatchHandler @ 06964a6c */
                iVar4 = FUN_06776874(*plVar12,2,0);
                    /* try { // try from 0696493c to 06a6493f has its CatchHandler @ 06964a90 */
                lVar6 = FUN_03a8a804(*(undefined8 *)puVar3,iVar4 + 1);
                    /* try { // try from 06964940 to 06a64957 has its CatchHandler @ 06964a9c */
                *unaff_x20 = lVar6;
                thunk_FUN_03afed3c();
                lVar6 = *unaff_x20;
                if (lVar6 != 0) {
                    /* try { // try from 06964958 to 06a6495f has its CatchHandler @ 06964a5c */
                  uVar10 = *(ulong *)(lVar6 + 0x18);
                  uVar9 = (uint)uVar10;
                  if (0 < (int)uVar9) {
                    lVar8 = *plVar12;
                    /* try { // try from 06964968 to 06a64983 has its CatchHandler @ 06964a58 */
                    uVar7 = 0;
                    do {
                      if (lVar8 == 0) goto LAB_069649dc;
                      piVar11 = *(int **)(lVar8 + 0x10);
                    /* try { // try from 06964984 to 06a649bf has its CatchHandler @ 06964a4c */
                      if ((((*piVar11 == 0) || (piVar11[4] == 0)) || ((uint)piVar11[8] <= uVar7)) ||
                         ((uVar10 & 0xffffffff) == uVar7)) {
                    /* WARNING: Subroutine does not return */
                        FUN_03a8a9c8();
                      }
                      *(undefined4 *)(lVar6 + 0x20 + uVar7 * 4) =
                           *(undefined4 *)(lVar8 + 0x20 + uVar7 * 4);
                      uVar7 = uVar7 + 1;
                    } while ((uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)) != uVar7);
                  }
                    /* try { // try from 069649c0 to 06a649c3 has its CatchHandler @ 06964a80 */
                    /* try { // try from 069649c4 to 06a649c7 has its CatchHandler @ 06964a78 */
                    /* try { // try from 069649c8 to 06a649df has its CatchHandler @ 06964a9c */
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_069649dc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


