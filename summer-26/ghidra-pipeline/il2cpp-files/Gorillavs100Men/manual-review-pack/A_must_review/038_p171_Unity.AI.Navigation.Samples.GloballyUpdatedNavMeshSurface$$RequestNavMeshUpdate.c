/*
FUNCTION_NAME: Unity.AI.Navigation.Samples.GloballyUpdatedNavMeshSurface$$RequestNavMeshUpdate
ENTRY_POINT: 038a3a88
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


ulong Unity_AI_Navigation_Samples_GloballyUpdatedNavMeshSurface__RequestNavMeshUpdate(void)

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
  int unaff_w23;
  int unaff_w24;
  byte *pbVar9;
  long *plVar10;
  byte *unaff_x26;
  long unaff_x27;
  ushort *puVar11;
  ushort *puVar12;
  byte *pbVar13;
  ushort *in_stack_00000008;
  
  iVar7 = (int)unaff_x21;
  if (unaff_x20 == 0) {
    plVar10 = *(long **)(unaff_x27 + 0x30);
    if (plVar10 != (long *)0x0) goto LAB_038a3aa0;
LAB_038a3b54:
    lVar6 = RootMotion_Dynamics_Muscle__get_colliders(*(undefined8 *)StringLiteral_8732,1);
    plVar10 = (long *)0x0;
    pbVar9 = unaff_x21;
    puVar11 = unaff_x19;
    do {
      pbVar13 = pbVar9;
      puVar12 = puVar11;
      pbVar3 = pbVar9;
      if (unaff_x26 <= pbVar9) goto joined_r0x038a3c54;
      while( true ) {
        bVar2 = *pbVar13;
        pbVar9 = pbVar13 + 1;
        if ((char)bVar2 < '\0') break;
        if (unaff_x19 + unaff_w24 <= puVar11) goto LAB_038a3c3c;
        puVar12 = puVar11 + 1;
        *puVar11 = (ushort)bVar2;
        puVar11 = puVar12;
        pbVar13 = pbVar9;
        pbVar3 = unaff_x26;
        if (unaff_x26 == pbVar9) goto joined_r0x038a3c54;
      }
      if (plVar10 == (long *)0x0) {
        if (unaff_x20 == 0) {
          plVar10 = *(long **)(unaff_x27 + 0x30);
          if (plVar10 == (long *)0x0) goto LAB_038a3ca8;
          plVar10 = (long *)(**(code **)(*plVar10 + 0x178))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x180));
        }
        else {
          plVar10 = (long *)FUN_038a39cc();
        }
        if (plVar10 == (long *)0x0) goto LAB_038a3ca8;
        plVar10[2] = (long)unaff_x21;
        plVar10[3] = (long)(unaff_x19 + unaff_w24);
      }
      if (lVar6 == 0) goto LAB_038a3ca8;
      if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02061554();
      }
      *(byte *)(lVar6 + 0x20) = bVar2;
      in_stack_00000008 = puVar11;
      uVar8 = (**(code **)(*plVar10 + 0x1a8))
                        (plVar10,lVar6,pbVar9,&stack0x00000008,*(undefined8 *)(*plVar10 + 0x1b0));
      puVar11 = in_stack_00000008;
    } while ((uVar8 & 1) != 0);
    plVar10[2] = 0;
    (**(code **)(*plVar10 + 0x198))(plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
LAB_038a3c3c:
    FUN_038b824c(unaff_x27);
    puVar12 = puVar11;
    pbVar3 = pbVar13;
joined_r0x038a3c54:
    if (unaff_x20 == 0) goto LAB_038a3c6c;
    iVar7 = (int)pbVar3 - iVar7;
  }
  else {
    plVar10 = *(long **)(unaff_x20 + 0x10);
    if (plVar10 == (long *)0x0) goto LAB_038a3b54;
LAB_038a3aa0:
    lVar6 = *(long *)PTR_DAT_0469b388;
    if ((*plVar10 != lVar6) ||
       (iVar5 = (**(code **)(lVar6 + 0x188))(plVar10,*(undefined8 *)(lVar6 + 400)), iVar5 != 1))
    goto LAB_038a3b54;
    if (plVar10[2] == 0) {
LAB_038a3ca8:
                    /* WARNING: Subroutine does not return */
      FUN_0206154c();
    }
    uVar4 = FUN_0372ef60(plVar10[2],0,0);
    puVar12 = unaff_x19;
    if (unaff_w24 < unaff_w23) {
      FUN_038b824c();
      unaff_x26 = unaff_x21 + unaff_w24;
    }
    while (unaff_x21 < unaff_x26) {
      bVar2 = *unaff_x21;
      unaff_x21 = unaff_x21 + 1;
      uVar1 = uVar4;
      if (-1 < (char)bVar2) {
        uVar1 = (ushort)bVar2;
      }
      *puVar12 = uVar1;
      puVar12 = puVar12 + 1;
    }
    if (unaff_x20 == 0) goto LAB_038a3c6c;
    iVar7 = (int)unaff_x21 - iVar7;
  }
  *(int *)(unaff_x20 + 0x2c) = iVar7;
LAB_038a3c6c:
  uVar8 = (long)puVar12 - (long)unaff_x19;
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  return uVar8 >> 1;
}


