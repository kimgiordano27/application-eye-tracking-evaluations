/*
FUNCTION_NAME: OVREyeGaze$$.ctor
ENTRY_POINT: 02b9afac
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_8;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


long OVREyeGaze___ctor(void)

{
  ushort uVar1;
  short sVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int iVar8;
  long unaff_x22;
  int iStack0000000000000008;
  int iStack000000000000000c;
  undefined *puVar7;
  
  lVar3 = FUN_017fc350(PTR_DAT_03808d40);
  *(undefined1 *)(unaff_x22 + 0x9ab) = 1;
  if (unaff_x20 != 0) {
    if (0 < *(int *)(unaff_x20 + 0x10)) {
      iVar8 = 0;
      do {
        uVar1 = FUN_02a4b568();
        if ((uVar1 < 0x20) || (sVar2 = FUN_02a4b568(), sVar2 == 0x7f)) {
          iStack000000000000000c = unaff_w19 + iVar8;
          uVar5 = thunk_FUN_01851c08(PTR_DAT_037f2f90);
          uVar5 = thunk_FUN_018617ec(uVar5,(long)&stack0x00000008 + 4);
          puVar7 = PTR_DAT_03808d48;
          goto LAB_02b9b13c;
        }
        lVar3 = FUN_02a4b568();
        if (0x7f < ((uint)lVar3 & 0xffff)) {
          lVar3 = FUN_02b9b384();
          unaff_x20 = lVar3;
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(unaff_x20 + 0x10));
    }
    if (*(char *)(unaff_x21 + 0x11) != '\0') {
      lVar3 = FUN_02b9b4c8(lVar3,unaff_x20,unaff_w19);
    }
    if (unaff_x20 != 0) {
      if (0 < *(int *)(unaff_x20 + 0x10)) {
        iVar8 = 0;
        do {
          lVar3 = FUN_02a4b568(unaff_x20,iVar8,0);
          puVar7 = PTR_DAT_03808d40;
          if (0x7f < ((uint)lVar3 & 0xffff)) {
            uVar4 = FUN_02a4fed4(unaff_x20,*(undefined8 *)PTR_DAT_03808d40,5,0);
            if ((uVar4 & 1) != 0) {
              iStack0000000000000008 = unaff_w19 + iVar8;
              uVar5 = thunk_FUN_01851c08(PTR_DAT_037f2f90);
              uVar5 = thunk_FUN_018617ec(uVar5,&stack0x00000008);
              puVar7 = PTR_DAT_03808d58;
LAB_02b9b13c:
              uVar6 = thunk_FUN_01851c08(puVar7);
              uVar5 = FUN_02a473b8(uVar6,uVar5,0);
              thunk_FUN_01851c08(PTR_DAT_037f87a8);
              uVar6 = thunk_FUN_01861bbc();
              System_Threading_Tasks_Task__Finish(uVar6,uVar5,0);
              uVar5 = thunk_FUN_01851c08(PTR_DAT_03808d50);
                    /* WARNING: Subroutine does not return */
              FUN_017fc474(uVar6,uVar5);
            }
            if (*(long *)(unaff_x21 + 0x18) == 0) goto LAB_02b9b188;
            uVar5 = FUN_02b9b690(*(long *)(unaff_x21 + 0x18),unaff_x20);
            lVar3 = FUN_02a43498(*(undefined8 *)puVar7,uVar5,0);
            unaff_x20 = lVar3;
            break;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(unaff_x20 + 0x10));
      }
      OVRUnityHumanoidSkeletonRetargeter__get_Adjustments(lVar3,unaff_x20,unaff_w19);
      return unaff_x20;
    }
  }
LAB_02b9b188:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


