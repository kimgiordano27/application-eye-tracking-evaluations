/*
FUNCTION_NAME: System.Collections.Generic.List.Enumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$MoveNextRare
ENTRY_POINT: 0144c93c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__MoveNextRare
               (void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_00fdc2e4(PTR_DAT_0234cba8);
  *(undefined1 *)(unaff_x22 + 0x560) = 1;
  lVar7 = FUN_00fdc388(*unaff_x23,unaff_w20);
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x188);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0103c244(lVar8);
  }
  lVar8 = FUN_00fdc388(lVar8,unaff_w20);
  uVar2 = *(uint *)(unaff_x19 + 0x20);
  FUN_01d6ade4(*(undefined8 *)(unaff_x19 + 0x18),0,lVar8,0,(ulong)uVar2,0);
  if (0 < (int)uVar2) {
    if (lVar8 == 0) {
LAB_0144ca60:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar3 = *(uint *)(lVar8 + 0x18);
    uVar9 = 0;
    do {
      if (uVar3 <= uVar9) {

        System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_IEnumerator_Reset
        :
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      iVar4 = *(int *)(lVar8 + uVar9 * 0x1c + 0x20);
      if (-1 < iVar4) {
        if (lVar7 == 0) goto LAB_0144ca60;
        iVar6 = 0;
        if (unaff_w20 != 0) {
          iVar6 = iVar4 / unaff_w20;
        }
        uVar5 = iVar4 - iVar6 * unaff_w20;
        if (*(uint *)(lVar7 + 0x18) <= uVar5)
        goto 
        System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_IEnumerator_Reset
        ;
        lVar1 = lVar7 + (ulong)uVar5 * 4;
        *(int *)(lVar8 + uVar9 * 0x1c + 0x24) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar9 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar2);
  }
  *(long *)(unaff_x19 + 0x10) = lVar7;
  thunk_FUN_0106e12c((long *)(unaff_x19 + 0x10),lVar7);
  *(long *)(unaff_x19 + 0x18) = lVar8;
  thunk_FUN_0106e12c((undefined8 *)(unaff_x19 + 0x18),lVar8);
  return;
}


