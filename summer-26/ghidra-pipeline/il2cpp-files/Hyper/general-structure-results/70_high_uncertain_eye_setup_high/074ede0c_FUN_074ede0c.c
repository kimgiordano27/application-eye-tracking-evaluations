/*
FUNCTION_NAME: FUN_074ede0c
ENTRY_POINT: 074ede0c
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_074ede0c(long param_1,uint param_2,int param_3,int param_4,long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_1 == 0) {
LAB_074edfe0:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  iVar7 = param_4 + -1;
  uVar12 = *(uint *)(param_1 + 0x18);
  uVar8 = iVar7 + param_2;
  if (uVar8 < uVar12) {
    lVar1 = param_1 + (long)(int)uVar8 * 0x10;
    iVar3 = param_3;
    if (param_3 < 0) {
      iVar3 = param_3 + 1;
    }
    uVar13 = *(undefined8 *)(lVar1 + 0x20);
    uVar14 = *(undefined8 *)(lVar1 + 0x28);
    if ((int)param_2 <= iVar3 >> 1) {
      do {
        uVar12 = param_2 * 2;
        uVar11 = (uint)*(undefined8 *)(param_1 + 0x18);
        if ((int)uVar12 < param_3) {
          uVar8 = uVar12 + param_4;
          if ((uVar11 <= uVar8 - 1) || (uVar11 <= uVar8))
          goto 
          System_Collections_Generic_ArraySortHelper<OVRPlugin_Qpl_Annotation_Builder_Entry>__BinarySearch
          ;
          if (param_5 == 0) goto LAB_074edfe0;
          lVar1 = param_1 + (long)(int)(uVar8 - 1) * 0x10;
          lVar2 = param_1 + (long)(int)uVar8 * 0x10;
          uVar15 = *(undefined8 *)(lVar1 + 0x20);
          uVar5 = *(undefined8 *)(lVar1 + 0x28);
          uVar4 = *(undefined8 *)(lVar2 + 0x20);
          uVar6 = *(undefined8 *)(lVar2 + 0x28);
          if ((*(ushort *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
            FUN_04980b34();
          }
          uVar8 = (**(code **)(param_5 + 0x18))
                            (*(undefined8 *)(param_5 + 0x40),uVar15,uVar5,uVar4,uVar6,
                             *(undefined8 *)(param_5 + 0x28));
          uVar11 = (uint)*(undefined8 *)(param_1 + 0x18);
          uVar12 = uVar12 | uVar8 >> 0x1f;
        }
        uVar8 = iVar7 + uVar12;
        if (uVar11 <= uVar8)
        goto 
        System_Collections_Generic_ArraySortHelper<OVRPlugin_Qpl_Annotation_Builder_Entry>__BinarySearch
        ;
        if (param_5 == 0) goto LAB_074edfe0;
        lVar1 = param_1 + (long)(int)uVar8 * 0x10;
        uVar15 = *(undefined8 *)(lVar1 + 0x20);
        uVar4 = *(undefined8 *)(lVar1 + 0x28);
        if ((*(ushort *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_04980b34();
        }
        iVar9 = (**(code **)(param_5 + 0x18))
                          (*(undefined8 *)(param_5 + 0x40),uVar13,uVar14,uVar15,uVar4,
                           *(undefined8 *)(param_5 + 0x28));
        if (-1 < iVar9) {
          uVar8 = iVar7 + param_2;
          break;
        }
                    /* try { // try from 074edf64 to 075edfc7 has its CatchHandler @ 074ee078 */
        if ((*(uint *)(param_1 + 0x18) <= uVar8) ||
           (param_2 = iVar7 + param_2, *(uint *)(param_1 + 0x18) <= param_2))
        goto 
        System_Collections_Generic_ArraySortHelper<OVRPlugin_Qpl_Annotation_Builder_Entry>__BinarySearch
        ;
        lVar2 = param_1 + (long)(int)param_2 * 0x10;
        uVar15 = *(undefined8 *)(lVar1 + 0x20);
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
        *(undefined8 *)(lVar2 + 0x20) = uVar15;
        thunk_FUN_049ee3d8(param_1 + 0x20 + (long)(int)param_2 * 0x10,0);
        param_2 = uVar12;
      } while ((int)uVar12 <= iVar3 >> 1);
      uVar12 = *(uint *)(param_1 + 0x18);
    }
    if (uVar8 < uVar12) {
      param_1 = param_1 + (long)(int)uVar8 * 0x10;
      puVar10 = (undefined8 *)(param_1 + 0x20);
      *puVar10 = uVar13;
      *(undefined8 *)(param_1 + 0x28) = uVar14;
                    /* try { // try from 074edfd8 to 075ee01f has its CatchHandler @ 074ee07c */
      thunk_FUN_049ee3d8(puVar10,0);
      return;
    }
  }
System_Collections_Generic_ArraySortHelper<OVRPlugin_Qpl_Annotation_Builder_Entry>__BinarySearch:
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


