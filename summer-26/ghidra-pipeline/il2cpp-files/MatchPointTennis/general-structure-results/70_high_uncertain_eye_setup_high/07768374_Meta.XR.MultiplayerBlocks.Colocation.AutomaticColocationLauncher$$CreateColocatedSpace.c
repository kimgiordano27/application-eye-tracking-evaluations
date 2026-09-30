/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$CreateColocatedSpace
ENTRY_POINT: 07768374
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__CreateColocatedSpace
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,uint param_7,long param_8)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  
  if ((DAT_0a5232d5 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f32e78);
    FUN_04447ba8(PTR_DAT_09f307a8);
    FUN_04447ba8(PTR_DAT_09f32e80);
    FUN_04447ba8(PTR_DAT_09f30818);
    DAT_0a5232d5 = 1;
  }
  puVar4 = PTR_DAT_09f32e80;
  puVar3 = PTR_DAT_09f30818;
  puVar2 = PTR_DAT_09f307a8;
  if ((param_8 != 0) && (lVar5 = *(long *)(param_8 + 0x58), lVar5 != 0)) {
    iVar9 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar9) {
        return;
      }
      lVar5 = FUN_05badb74(lVar5,iVar9,*(undefined8 *)puVar2);
      if ((lVar5 == 0) || (lVar8 = *(long *)(lVar5 + 0x10), lVar8 == 0)) break;
      if (*(uint *)(lVar8 + 0x18) <= param_7) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar8 = *(long *)(lVar8 + (long)(int)param_7 * 8 + 0x20);
      if (lVar8 == 0) break;
      uVar6 = FUN_0776deec(lVar8,0);
      if ((uVar6 & 1) != 0) {
        if ((*(long *)(lVar5 + 0x18) == 0) ||
           (lVar8 = *(long *)(*(long *)(lVar5 + 0x18) + 0x10), lVar8 == 0)) break;
        lVar10 = *(long *)(param_8 + 0x50);
        lVar8 = FUN_05badb74(lVar8,0,*(undefined8 *)puVar3);
        if ((lVar8 == 0) || (*(long *)(param_8 + 0x70) == 0)) break;
        uVar11 = *(undefined8 *)(lVar8 + 0x10);
        uVar7 = FUN_05badb74(*(long *)(param_8 + 0x70),param_7,*(undefined8 *)puVar4);
        if (lVar10 == 0) break;
        uVar7 = FUN_07774430(lVar10,uVar11,uVar7,0);
        if (((*(long *)(param_8 + 0x70) == 0) ||
            (lVar8 = FUN_05badb74(*(long *)(param_8 + 0x70),param_7,*(undefined8 *)puVar4),
            lVar8 == 0)) || (*(long *)(param_8 + 0x70) == 0)) break;
        uVar11 = *(undefined8 *)(lVar8 + 0x10);
        cVar1 = *(char *)(param_8 + 0x27);
        lVar8 = FUN_05badb74(*(long *)(param_8 + 0x70),param_7,*(undefined8 *)puVar4);
        if (lVar8 == 0) break;
        FUN_0776ed28(uVar7,param_2,param_3,param_4,lVar5,uVar11,param_7,cVar1 != '\0',param_6,
                     *(undefined1 *)(lVar8 + 0x18),0);
      }
      lVar5 = *(long *)(param_8 + 0x58);
      iVar9 = iVar9 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


