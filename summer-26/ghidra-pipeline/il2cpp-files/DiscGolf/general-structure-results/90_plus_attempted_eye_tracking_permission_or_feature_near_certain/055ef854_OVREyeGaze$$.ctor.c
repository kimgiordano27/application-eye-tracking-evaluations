/*
FUNCTION_NAME: OVREyeGaze$$.ctor
ENTRY_POINT: 055ef854
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze___ctor(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  int iVar6;
  long lVar7;
  long *unaff_x24;
  
  uVar2 = FUN_055339f0(param_1,0);
  lVar7 = *unaff_x24;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_02dcfd74(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  puVar1 = System_Collections_Generic_Dictionary<string,_SubscribeResult>_TypeInfo;
  if (*(long *)(*(long *)(lVar5 + 0x10) + 0x38) == 0) {
    FUN_02dcfd74();
  }
  iVar6 = *(int *)(unaff_x19 + 0xa0);
  FUN_05691654();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_055ee350(unaff_w21,unaff_w20,uVar2,iVar6 << 2);
  if ((uVar3 & 1) != 0) {
    lVar7 = *(long *)
             System_Collections_Generic_Dictionary<string,_XmlSqlBinaryReader_NamespaceDecl>_TypeInfo
    ;
    lVar5 = *(long *)(lVar7 + 0x38);
    if (lVar5 == 0) {
      FUN_02dcfd74(lVar7);
      lVar5 = *(long *)(lVar7 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 8);
    if (*(long *)(lVar5 + 0x38) == 0) {
      FUN_02dcfd74(lVar5);
    }
    if (0 < *(int *)(unaff_x19 + 0xa0)) {
      if (*(long *)(unaff_x19 + 0x98) == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        lVar5 = FUN_036eca18(*(long *)(unaff_x19 + 0x98),*(undefined8 *)(unaff_x19 + 0xa0),
                             *(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28));
        if (lVar5 == 0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = (undefined4 *)
                   FUN_036ec930(*(undefined8 *)(unaff_x19 + 0x98),*(undefined8 *)(unaff_x19 + 0xa0),
                                *(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x18));
        }
        if (*(int *)(unaff_x19 + 0xa0) < 1) {
          return;
        }
      }
      iVar6 = 0;
      do {
        if (*(long *)(unaff_x19 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_06324dfc(*puVar4,*(long *)(unaff_x19 + 0x88),iVar6,0);
        iVar6 = iVar6 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar6 < *(int *)(unaff_x19 + 0xa0));
    }
  }
  return;
}


