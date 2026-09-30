/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$.cctor
ENTRY_POINT: 02c4ec4c
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_OVRP_1_8_0___cctor(long param_1)

{
  ushort uVar1;
  byte bVar2;
  byte *pbVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ushort *unaff_x19;
  long unaff_x20;
  byte *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  byte *pbVar9;
  long *plVar10;
  byte *pbVar11;
  long unaff_x27;
  ushort *puVar12;
  ushort *puVar13;
  byte *pbVar14;
  ushort *in_stack_00000008;
  
  FUN_017fc350(*(undefined8 *)(param_1 + 0xc00));
  FUN_017fc350(PTR_DAT_03800540);
  *(undefined1 *)(unaff_x22 + 0x119) = 1;
  pbVar11 = unaff_x21 + unaff_w23;
  in_stack_00000008 = (ushort *)0x0;
  iVar7 = (int)unaff_x21;
  if (unaff_x20 == 0) {
    plVar10 = *(long **)(unaff_x27 + 0x30);
    if (plVar10 != (long *)0x0) goto LAB_02c4ec88;
LAB_02c4ed34:
    lVar6 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2c00,1);
    plVar10 = (long *)0x0;
    pbVar9 = unaff_x21;
    puVar12 = unaff_x19;
    do {
      pbVar14 = pbVar9;
      puVar13 = puVar12;
      pbVar3 = pbVar9;
      if (pbVar11 <= pbVar9) goto joined_r0x02c4ee34;
      while( true ) {
        bVar2 = *pbVar14;
        pbVar9 = pbVar14 + 1;
        if ((char)bVar2 < '\0') break;
        if (unaff_x19 + unaff_w24 <= puVar12) goto LAB_02c4ee1c;
        puVar13 = puVar12 + 1;
        *puVar12 = (ushort)bVar2;
        puVar12 = puVar13;
        pbVar14 = pbVar9;
        pbVar3 = pbVar11;
        if (pbVar11 == pbVar9) goto joined_r0x02c4ee34;
      }
      if (plVar10 == (long *)0x0) {
        if (unaff_x20 == 0) {
          plVar10 = *(long **)(unaff_x27 + 0x30);
          if (plVar10 == (long *)0x0) goto LAB_02c4ee88;
          plVar10 = (long *)(**(code **)(*plVar10 + 0x178))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x180));
        }
        else {
          plVar10 = (long *)FUN_02c4ebb4();
        }
        if (plVar10 == (long *)0x0) goto LAB_02c4ee88;
        plVar10[2] = (long)unaff_x21;
        plVar10[3] = (long)(unaff_x19 + unaff_w24);
      }
      if (lVar6 == 0) goto LAB_02c4ee88;
      if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      *(byte *)(lVar6 + 0x20) = bVar2;
      in_stack_00000008 = puVar12;
      uVar8 = (**(code **)(*plVar10 + 0x1b8))
                        (plVar10,lVar6,pbVar9,&stack0x00000008,*(undefined8 *)(*plVar10 + 0x1c0));
      puVar12 = in_stack_00000008;
    } while ((uVar8 & 1) != 0);
    plVar10[2] = 0;
    (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
LAB_02c4ee1c:
    FUN_02a6c254(unaff_x27);
    puVar13 = puVar12;
    pbVar3 = pbVar14;
joined_r0x02c4ee34:
    if (unaff_x20 == 0) goto LAB_02c4ee4c;
    iVar7 = (int)pbVar3 - iVar7;
  }
  else {
    plVar10 = *(long **)(unaff_x20 + 0x10);
    if (plVar10 == (long *)0x0) goto LAB_02c4ed34;
LAB_02c4ec88:
    lVar6 = *(long *)PTR_DAT_03800540;
    if ((*plVar10 != lVar6) ||
       (iVar5 = (**(code **)(lVar6 + 0x188))(plVar10,*(undefined8 *)(lVar6 + 400)), iVar5 != 1))
    goto LAB_02c4ed34;
    if (plVar10[2] == 0) {
LAB_02c4ee88:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar4 = FUN_02a4b568(plVar10[2],0,0);
    puVar13 = unaff_x19;
    if (unaff_w24 < unaff_w23) {
      FUN_02a6c254();
      pbVar11 = unaff_x21 + unaff_w24;
    }
    while (unaff_x21 < pbVar11) {
      uVar1 = (ushort)*unaff_x21;
      if ((char)*unaff_x21 < '\0') {
        uVar1 = uVar4;
      }
      *puVar13 = uVar1;
      unaff_x21 = unaff_x21 + 1;
      puVar13 = puVar13 + 1;
    }
    if (unaff_x20 == 0) goto LAB_02c4ee4c;
    iVar7 = (int)unaff_x21 - iVar7;
  }
  *(int *)(unaff_x20 + 0x2c) = iVar7;
LAB_02c4ee4c:
  uVar8 = (long)puVar13 - (long)unaff_x19;
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  return uVar8 >> 1;
}


