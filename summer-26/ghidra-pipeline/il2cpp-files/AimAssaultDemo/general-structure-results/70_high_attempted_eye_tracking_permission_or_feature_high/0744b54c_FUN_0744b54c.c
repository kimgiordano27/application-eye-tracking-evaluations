/*
FUNCTION_NAME: FUN_0744b54c
ENTRY_POINT: 0744b54c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0744b54c(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  
  puVar2 = UnityEngine_Rendering_Universal_TransparentSettingsPass_TypeInfo;
  if ((DAT_08269b77 & 1) == 0) {
                    /* try { // try from 0744b578 to 0754b5c3 has its CatchHandler @ 0744bb74 */
    FUN_0373b518(UnityEngine_Rendering_Universal_TransparentSettingsPass_TypeInfo);
    FUN_0373b518(Unity_VisualScripting_Antlr3_Runtime_Tree_Tree_TypeInfo);
    FUN_0373b518(Unity_VisualScripting_Antlr3_Runtime_Tree_TreeParser_TypeInfo);
    FUN_0373b518(Unity_VisualScripting_Antlr3_Runtime_Tree_TreePatternLexer_TypeInfo);
    FUN_0373b518(OVREyeGaze_TypeInfo);
    FUN_0373b518(Unity_VisualScripting_Antlr3_Runtime_Tree_TreePatternParser_TypeInfo);
    DAT_08269b77 = 1;
  }
  lVar3 = thunk_FUN_037787d0(param_2,*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
  }
  puVar2 = Unity_VisualScripting_Antlr3_Runtime_Tree_Tree_TypeInfo;
  if (param_2 != (long *)0x0) {
    lVar3 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Unity_VisualScripting_Antlr3_Runtime_Tree_Tree_TypeInfo) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0744b63c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_0377596c(param_2,*(long *)Unity_VisualScripting_Antlr3_Runtime_Tree_Tree_TypeInfo,1
                         );
LAB_0744b63c:
    (*(code *)*puVar4)(param_2,param_1,puVar4[1]);
    lVar3 = FUN_07445304(param_1);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) == 0) {
        return;
      }
      lVar3 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar3 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_0744b6c0;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c(param_2,*(long *)puVar2,2);
LAB_0744b6c0:
      (*(code *)*puVar4)(param_2,param_1,puVar4[1]);
      lVar3 = *(long *)(param_1 + 0x220);
      if (lVar3 == 0) {
        plVar6 = (long *)(param_1 + 0x220);
        lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                    Unity_VisualScripting_Antlr3_Runtime_Tree_TreePatternParser_TypeInfo
                                  );
        FUN_049ce6c0(lVar3,*(undefined8 *)
                            Unity_VisualScripting_Antlr3_Runtime_Tree_TreePatternLexer_TypeInfo);
        *plVar6 = lVar3;
        thunk_FUN_037aeb94(plVar6,lVar3);
        lVar3 = *plVar6;
        if (lVar3 == 0) goto LAB_0744b790;
      }
      lVar5 = *(long *)(lVar3 + 0x10);
      lVar8 = *(long *)Unity_VisualScripting_Antlr3_Runtime_Tree_TreeParser_TypeInfo;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *plVar6 = (long)param_2;
          thunk_FUN_037aeb94(plVar6,param_2);
          return;
        }
        FUN_049ceef4(lVar3,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                    );
        return;
      }
    }
  }
LAB_0744b790:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


