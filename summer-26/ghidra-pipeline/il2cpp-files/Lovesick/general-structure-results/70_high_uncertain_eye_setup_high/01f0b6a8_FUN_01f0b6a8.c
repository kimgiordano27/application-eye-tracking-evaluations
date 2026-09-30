/*
FUNCTION_NAME: FUN_01f0b6a8
ENTRY_POINT: 01f0b6a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01f0b6a8(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  
  if ((DAT_0378018c & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_LowLevel_ActionEvent_set_controlIndex__);
    thunk_FUN_00d48444(PTR_DAT_033ef1e8);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_113_0_TypeInfo);
    DAT_0378018c = 1;
  }
  puVar4 = Method_UnityEngine_InputSystem_LowLevel_ActionEvent_set_controlIndex__;
  puVar3 = OVRPlugin_OVRP_1_113_0_TypeInfo;
  lVar8 = *(long *)(param_1 + 0x80);
  if (lVar8 != 0) {
    iVar14 = *(int *)(param_1 + 0x7c);
                    /* try { // try from 01f0b718 to 0200b71f has its CatchHandler @ 01f0b9f0 */
    do {
      if (*(int *)(lVar8 + 0x1c) <= iVar14) {
        return;
      }
      plVar9 = (long *)FUN_01f5cf88(lVar8,iVar14,0);
      if (plVar9 == (long *)0x0) break;
      if (*plVar9 != *(long *)PTR_DAT_033ef1e8) {
LAB_01f0b9ec:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar9);
      }
      if (plVar9[8] != 0) {
        if ((*(long *)(param_1 + 0x80) == 0) ||
           (plVar9 = (long *)FUN_01f5cf88(*(long *)(param_1 + 0x80),iVar14,0), plVar9 == (long *)0x0
           )) break;
        if (*plVar9 != *(long *)PTR_DAT_033ef1e8) goto LAB_01f0b9ec;
        lVar8 = plVar9[8];
        if (lVar8 == 0) break;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar1) {
          uVar18 = 0;
          do {
            if (uVar1 <= uVar18) {
LAB_01f0b9e4:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            plVar17 = (long *)(lVar8 + (long)(int)uVar18 * 8 + 0x20);
            if ((*plVar17 == 0) || (plVar9 = *(long **)(param_1 + 0x50), plVar9 == (long *)0x0))
            goto LAB_01f0b9c4;
            lVar16 = *(long *)(*plVar17 + 0x18);
            uVar10 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
            plVar9 = *(long **)(param_1 + 0x50);
            if ((plVar9 == (long *)0x0) ||
               (uVar11 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0)),
               lVar16 == 0)) goto LAB_01f0b9c4;
            uVar12 = FUN_01fab134(lVar16,uVar10,uVar11,0);
            if ((uVar12 & 1) != 0) {
              if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_01f0b9e4;
              if ((*plVar17 == 0) || (plVar9 = *(long **)(param_1 + 0x30), plVar9 == (long *)0x0))
              goto LAB_01f0b9c4;
              lVar16 = *(long *)(*plVar17 + 0x18);
              uVar5 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
              plVar9 = *(long **)(param_1 + 0x30);
              if (plVar9 == (long *)0x0) goto LAB_01f0b9c4;
              uVar6 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
              if (lVar16 == 0) goto LAB_01f0b9c4;
              FUN_01fafa50(lVar16,uVar5,uVar6,0);
            }
            if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_01f0b9e4;
            iVar15 = 0;
            while( true ) {
              if ((*plVar17 == 0) || (plVar9 = *(long **)(*plVar17 + 0x20), plVar9 == (long *)0x0))
              goto LAB_01f0b9c4;
              iVar7 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
              if (iVar7 <= iVar15) break;
              if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_01f0b9e4;
              if ((*plVar17 == 0) || (plVar9 = *(long **)(*plVar17 + 0x20), plVar9 == (long *)0x0))
              goto LAB_01f0b9c4;
              plVar9 = (long *)(**(code **)(*plVar9 + 0x2e8))
                                         (plVar9,iVar15,*(undefined8 *)(*plVar9 + 0x2f0));
              if (plVar9 != (long *)0x0) {
                bVar2 = *(byte *)(*(long *)puVar4 + 300);
                if ((*(byte *)(*plVar9 + 300) < bVar2) ||
                   (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4))
                goto LAB_01f0b9ec;
              }
              plVar13 = *(long **)(param_1 + 0x50);
              if (plVar13 == (long *)0x0) goto LAB_01f0b9c4;
              uVar10 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
              plVar13 = *(long **)(param_1 + 0x50);
              if ((plVar13 == (long *)0x0) ||
                 (uVar11 = (**(code **)(*plVar13 + 0x1c8))
                                     (plVar13,*(undefined8 *)(*plVar13 + 0x1d0)),
                 plVar9 == (long *)0x0)) goto LAB_01f0b9c4;
              uVar12 = FUN_01fab134(plVar9,uVar10,uVar11,0);
              if ((uVar12 & 1) != 0) {
                if (*(long *)(param_1 + 0x60) == 0) goto LAB_01f0b9c4;
                lVar16 = *(long *)(*(long *)(param_1 + 0x60) + 0x20);
                if (lVar16 != 0) {
                  if (*(long *)(lVar16 + 0x30) == 0) {
                    plVar9 = *(long **)(param_1 + 0x50);
                    if (plVar9 == (long *)0x0) goto LAB_01f0b9c4;
                    uVar10 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0))
                    ;
                    FUN_01fadc24(param_1,*(undefined8 *)puVar3,uVar10,0);
                  }
                  else {
                    *(undefined1 *)((long)plVar9 + 0x2c) = 1;
                  }
                }
              }
              iVar15 = iVar15 + 1;
              if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_01f0b9e4;
            }
            uVar1 = *(uint *)(lVar8 + 0x18);
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < (int)uVar1);
        }
      }
      lVar8 = *(long *)(param_1 + 0x80);
      iVar14 = iVar14 + 1;
    } while (lVar8 != 0);
  }
LAB_01f0b9c4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


