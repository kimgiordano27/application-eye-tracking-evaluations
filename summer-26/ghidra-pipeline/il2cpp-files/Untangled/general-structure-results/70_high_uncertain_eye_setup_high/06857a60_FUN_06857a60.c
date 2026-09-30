/*
FUNCTION_NAME: FUN_06857a60
ENTRY_POINT: 06857a60
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_06857a60(long *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  
  if ((DAT_071d6b36 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3b718);
    FUN_02f07e70(OVRPlugin_OVRP_1_110_0_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3bc50);
    FUN_02f07e70(PTR_DAT_06d3bc58);
    FUN_02f07e70(System_Xml_Schema_XmlSchemaWhiteSpaceFacet_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d39728);
    FUN_02f07e70(PTR_DAT_06d39c88);
    DAT_071d6b36 = 1;
  }
  puVar4 = PTR_DAT_06d39c88;
  if (param_2 != 0) {
    uVar9 = *(undefined8 *)(param_2 + 0xa0);
    lVar5 = *(long *)PTR_DAT_06d39c88;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar5 = *(long *)puVar4;
    }
    uVar6 = thunk_FUN_05464b70(uVar9,**(undefined8 **)(lVar5 + 0xb8),0);
    puVar4 = PTR_DAT_06d39728;
    if (((uVar6 & 1) == 0) && (*(char *)(param_2 + 0xa8) != '\0')) {
      iVar2 = *(int *)(param_2 + 0x9c);
      lVar5 = *(long *)PTR_DAT_06d39728;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar5 = *(long *)puVar4;
      }
      if (iVar2 != *(int *)(*(long *)(lVar5 + 0xb8) + 4)) {
        uVar3 = *(undefined4 *)(param_2 + 0x9c);
        uVar9 = FUN_068747cc(param_2,0);
        FUN_06856ef8(param_1,uVar3,uVar9);
      }
      plVar10 = (long *)param_1[0x96];
      if (plVar10 != (long *)0x0) {
        lVar5 = *plVar10;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06d3b718) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_06857bd0;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)PTR_DAT_06d3b718,2);
LAB_06857bd0:
        (*(code *)*puVar7)(plVar10,puVar7[1]);
      }
      if (ABS(*(float *)(param_1 + 0x8e)) <= 10.0) {
        bVar1 = ABS(*(float *)((long)param_1 + 0x474)) <= 10.0;
      }
      else {
        bVar1 = false;
      }
      *(undefined2 *)((long)param_1 + 0x494) = 0x100;
      FUN_06857c94(*(undefined4 *)(param_2 + 0xb4),*(undefined4 *)(param_2 + 0xb8),param_1);
      if (!bVar1) {
        uVar9 = (**(code **)(*param_1 + 0x768))(param_1,*(undefined8 *)(*param_1 + 0x770));
        FUN_068b1938(uVar9,*(undefined4 *)(param_2 + 0x9c),0);
        lVar5 = (**(code **)(*param_1 + 0x768))(param_1,*(undefined8 *)(*param_1 + 0x770));
        if (lVar5 == 0) goto LAB_06857c90;
        uVar9 = FUN_068c603c(lVar5,0);
        FUN_068b1e08(uVar9,*(undefined4 *)(param_2 + 0x9c),0);
        FUN_0686a568(param_2,0);
        *(undefined1 *)((long)param_1 + 0x496) = 1;
      }
    }
    return;
  }
LAB_06857c90:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


