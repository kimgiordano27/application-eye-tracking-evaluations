/*
FUNCTION_NAME: FUN_0144c90c
ENTRY_POINT: 0144c90c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0144c90c(long param_1,int param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  puVar7 = PTR_DAT_0234cba8;
  if ((DAT_0247b560 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234cba8);
    DAT_0247b560 = 1;
  }
  lVar8 = FUN_00fdc388(*(undefined8 *)puVar7,param_2);
  lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x188);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0103c244(lVar9);
  }
  lVar9 = FUN_00fdc388(lVar9,param_2);
  uVar2 = *(uint *)(param_1 + 0x20);
  FUN_01d6ade4(*(undefined8 *)(param_1 + 0x18),0,lVar9,0,(ulong)uVar2,0);
  if (0 < (int)uVar2) {
    if (lVar9 == 0) {
LAB_0144ca60:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar3 = *(uint *)(lVar9 + 0x18);
    uVar10 = 0;
    do {
      if (uVar3 <= uVar10) {

        System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_IEnumerator_Reset
        :
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      iVar4 = *(int *)(lVar9 + uVar10 * 0x1c + 0x20);
      if (-1 < iVar4) {
        if (lVar8 == 0) goto LAB_0144ca60;
        iVar6 = 0;
        if (param_2 != 0) {
          iVar6 = iVar4 / param_2;
        }
        uVar5 = iVar4 - iVar6 * param_2;
        if (*(uint *)(lVar8 + 0x18) <= uVar5)
        goto 
        System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_IEnumerator_Reset
        ;
        lVar1 = lVar8 + (ulong)uVar5 * 4;
        *(int *)(lVar9 + uVar10 * 0x1c + 0x24) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar10 + 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar2);
  }
  *(long *)(param_1 + 0x10) = lVar8;
  thunk_FUN_0106e12c((long *)(param_1 + 0x10),lVar8);
  *(long *)(param_1 + 0x18) = lVar9;
  thunk_FUN_0106e12c((undefined8 *)(param_1 + 0x18),lVar9);
  return;
}


