/*
FUNCTION_NAME: FUN_065dd310
ENTRY_POINT: 065dd310
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_15;telemetry_or_network_hits_3
*/


long FUN_065dd310(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  if ((DAT_07557826 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c4240);
    FUN_03188a78(System_Xml_ValidatingReaderNodeData___TypeInfo);
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(
                UnityEngine_Rendering_Universal_AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest___TypeInfo
                );
    FUN_03188a78(System_Linq_Expressions_ParameterExpression___TypeInfo);
    FUN_03188a78(Oculus_Avatar2_CAPI_ovrAvatar2Image___TypeInfo);
    DAT_07557826 = 1;
  }
  puVar5 = 
  UnityEngine_Rendering_Universal_AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest___TypeInfo
  ;
  if (*(long *)(param_1 + 0x58) != 0) {
    return *(long *)(param_1 + 0x58);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
                    /* try { // try from 065dd390 to 066dd3b7 has its CatchHandler @ 065dd54c */
    iVar6 = FUN_04782548(*(long *)(param_1 + 0x48),
                         *(undefined8 *)
                          UnityEngine_Rendering_Universal_AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest___TypeInfo
                        );
    puVar3 = System_Linq_Expressions_ParameterExpression___TypeInfo;
    if (iVar6 == 0) {
      uVar13 = 0;
LAB_065dd49c:
      lVar11 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070c4240,uVar13);
      *(long *)(param_1 + 0x58) = lVar11;
      if (0 < (int)uVar13) {
        if (lVar11 == 0) goto LAB_065dd494;
        uVar7 = *(uint *)(lVar11 + 0x18);
        uVar12 = 0;
        do {
          if (uVar7 == uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          lVar1 = lVar11 + uVar12;
          uVar12 = uVar12 + 1;
          *(undefined1 *)(lVar1 + 0x20) = 1;
        } while (uVar13 != uVar12);
      }
      return lVar11;
    }
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (plVar10 = (long *)FUN_04782324(*(long *)(param_1 + 0x48),0,
                                       *(undefined8 *)
                                        System_Linq_Expressions_ParameterExpression___TypeInfo),
       puVar4 = System_Xml_ValidatingReaderNodeData___TypeInfo, plVar10 != (long *)0x0)) {
      bVar2 = *(byte *)(*(long *)System_Xml_ValidatingReaderNodeData___TypeInfo + 0x130);
                    /* try { // try from 065dd3f4 to 066dd41f has its CatchHandler @ 065dd548 */
      if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)System_Xml_ValidatingReaderNodeData___TypeInfo)) {
LAB_065dd534:
                    /* WARNING: Subroutine does not return */
        FUN_03189058();
      }
      if (plVar10[9] != 0) {
        uVar7 = FUN_04782548(plVar10[9],*(undefined8 *)puVar5);
        lVar11 = *(long *)(param_1 + 0x48);
        if (lVar11 != 0) {
          uVar13 = (ulong)uVar7;
          iVar6 = 1;
          do {
            iVar8 = FUN_04782548(lVar11,*(undefined8 *)puVar5);
                    /* try { // try from 065dd424 to 066dd42b has its CatchHandler @ 065dd538 */
            if (iVar8 <= iVar6) goto LAB_065dd49c;
                    /* try { // try from 065dd42c to 066dd437 has its CatchHandler @ 065dd540 */
                    /* try { // try from 065dd43c to 066dd447 has its CatchHandler @ 065dd534 */
            if ((*(long *)(param_1 + 0x48) == 0) ||
               (plVar10 = (long *)FUN_04782324(*(long *)(param_1 + 0x48),iVar6,*(undefined8 *)puVar3
                                              ), plVar10 == (long *)0x0)) break;
            bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4))
            goto LAB_065dd534;
            if (plVar10[9] == 0) break;
            uVar9 = FUN_04782548(plVar10[9],*(undefined8 *)puVar5);
            if (uVar9 != uVar7) {
              if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              FUN_0698f0e8(*(undefined8 *)Oculus_Avatar2_CAPI_ovrAvatar2Image___TypeInfo,0);
              return 0;
            }
            lVar11 = *(long *)(param_1 + 0x48);
            iVar6 = iVar6 + 1;
          } while (lVar11 != 0);
        }
      }
    }
  }
LAB_065dd494:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


