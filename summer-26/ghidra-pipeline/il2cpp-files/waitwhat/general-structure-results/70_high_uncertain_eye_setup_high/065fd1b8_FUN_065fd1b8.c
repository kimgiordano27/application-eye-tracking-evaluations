/*
FUNCTION_NAME: FUN_065fd1b8
ENTRY_POINT: 065fd1b8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_065fd1b8(long param_1,undefined8 *param_2,long param_3,long param_4,int param_5,int param_6
                 )

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  
  if ((DAT_0755792e & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f2fb0);
    FUN_03188a78(System_Collections_Immutable_AllocFreeConcurrentStack_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BaseTreeView_TypeInfo);
    DAT_0755792e = 1;
  }
  if (param_3 != 0) {
    if (0 < *(int *)(param_3 + 0x18)) {
      iVar7 = 0;
      plVar12 = (long *)PTR_DAT_070f2fb0;
      do {
        puVar3 = UnityEngine_UIElements_BaseTreeView_TypeInfo;
        auVar14 = System_Collections_Generic_ArraySortHelper<OVRPlugin_Qpl_Annotation_Builder_Entry>__DownHeap
                            (param_3,iVar7,
                             *(undefined8 *)UnityEngine_UIElements_BaseTreeView_TypeInfo);
        iVar5 = auVar14._8_4_;
        uVar4 = auVar14._0_8_;
        if (param_4 == 0) goto LAB_065fd660;
        uVar6 = uVar4 >> 0x20;
        auVar15 = System_Collections_Generic_ArraySortHelper<OVRPlugin_Qpl_Annotation_Builder_Entry>__DownHeap
                            (param_4,iVar7 + param_5,*(undefined8 *)puVar3);
        iVar8 = 0;
        do {
          uVar11 = *param_2;
          uVar10 = *(undefined8 *)(param_1 + 0x18);
          iVar2 = *(int *)(param_2 + 0xb) - auVar14._0_4_;
          if (0x1ff < iVar2) {
            iVar2 = 0x200;
          }
          if (*(int *)(*plVar12 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          iVar1 = auVar15._8_4_ + iVar8;
          uVar9 = auVar15._4_4_;
          uVar13 = auVar15._0_4_;
          FUN_06999830(uVar11,iVar5 + iVar8,0,uVar4 & 0xffffffff,uVar6,iVar2,4,uVar10,iVar1,0,uVar13
                       ,uVar9,0);
          FUN_06999830(param_2[1],iVar5 + iVar8,0,uVar4 & 0xffffffff,uVar6,iVar2,4,
                       *(undefined8 *)(param_1 + 0x20),iVar1,0,uVar13,uVar9,0);
          FUN_06999830(param_2[2],iVar5 + iVar8,0,uVar4 & 0xffffffff,uVar6,iVar2,4,
                       *(undefined8 *)(param_1 + 0x28),iVar1,0,uVar13,uVar9,0);
          plVar12 = (long *)PTR_DAT_070f2fb0;
          if (*(char *)(param_1 + 0xa0) != '\0') {
            uVar11 = param_2[8];
            uVar10 = *(undefined8 *)(param_1 + 0x58);
            if (*(int *)(*(long *)PTR_DAT_070f2fb0 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            FUN_06999830(uVar11,iVar5 + iVar8,0,uVar4 & 0xffffffff,uVar6,iVar2,4,uVar10,iVar1,0,
                         uVar13,uVar9,0);
          }
          if (*(char *)(param_1 + 0xa3) != '\0') {
            uVar11 = param_2[9];
            uVar10 = *(undefined8 *)(param_1 + 0x60);
            if (*(int *)(*plVar12 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            FUN_06999830(uVar11,iVar5 + iVar8,0,uVar4 & 0xffffffff,uVar6,iVar2,4,uVar10,iVar1,0,
                         uVar13,uVar9,0);
            if (*(char *)(param_1 + 0xa4) != '\0') {
              uVar11 = param_2[10];
              uVar10 = *(undefined8 *)(param_1 + 0x68);
              if (*(int *)(*plVar12 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              FUN_06999830(uVar11,iVar5 + iVar8,0,uVar4 & 0xffffffff,uVar6,iVar2,4,uVar10,iVar1,0,
                           uVar13,uVar9,0);
            }
          }
          if (param_6 == 2) {
            uVar10 = param_2[3];
            uVar11 = *(undefined8 *)(param_1 + 0x30);
            if (*(int *)(*plVar12 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            FUN_06999830(uVar10,iVar5 + iVar8,0,uVar4 & 0xffffffff,uVar6,iVar2,4,uVar11,iVar1,0,
                         uVar13,uVar9,0);
            FUN_06999830(param_2[4],iVar5 + iVar8,0,uVar4 & 0xffffffff,uVar6,iVar2,4,
                         *(undefined8 *)(param_1 + 0x38),iVar1,0,uVar13,uVar9,0);
            FUN_06999830(param_2[5],iVar5 + iVar8,0,uVar4 & 0xffffffff,uVar6,iVar2,4,
                         *(undefined8 *)(param_1 + 0x40),iVar1,0,uVar13,uVar9,0);
            FUN_06999830(param_2[6],iVar5 + iVar8,0,uVar4 & 0xffffffff,uVar6,iVar2,4,
                         *(undefined8 *)(param_1 + 0x48),iVar1,0,uVar13,uVar9,0);
            plVar12 = (long *)PTR_DAT_070f2fb0;
          }
          if (*(char *)(param_1 + 0xa1) != '\0') {
            uVar11 = param_2[7];
            uVar10 = *(undefined8 *)(param_1 + 0x50);
            if (*(int *)(*plVar12 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            FUN_06999830(uVar11,iVar5 + iVar8,0,uVar4 & 0xffffffff,uVar6,iVar2,4,uVar10,iVar1,0,
                         uVar13,uVar9,0);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 != 4);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_3 + 0x18));
    }
    return;
  }
LAB_065fd660:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


