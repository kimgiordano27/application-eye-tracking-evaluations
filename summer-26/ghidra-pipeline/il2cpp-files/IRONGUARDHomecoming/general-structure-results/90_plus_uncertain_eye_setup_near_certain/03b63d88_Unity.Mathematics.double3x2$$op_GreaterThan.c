/*
FUNCTION_NAME: Unity.Mathematics.double3x2$$op_GreaterThan
ENTRY_POINT: 03b63d88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03b63df0) */
/* WARNING: Removing unreachable block (ram,0x03b63e34) */

bool Unity_Mathematics_double3x2__op_GreaterThan(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  int iVar14;
  bool bVar15;
  undefined8 *unaff_x27;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  iVar12 = 0;
  do {
    uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
    auVar16 = FUN_02616e1c(&stack0x00000030,iVar12,*unaff_x27);
    uVar10 = FUN_03b63650(uVar1,uVar2,auVar16._0_8_,auVar16._8_8_);
    puVar6 = StringLiteral_12542;
    puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((uVar10 & 1) != 0) {
      bVar3 = true;
      goto LAB_03b63bb0;
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < in_stack_00000038._4_4_);
  bVar3 = false;
LAB_03b63bb0:
  plVar8 = (long *)FUN_02f121ac(unaff_x19 + 0x10,*(undefined8 *)StringLiteral_12543);
  bVar15 = false;
LAB_03b63be4:
  do {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar10 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03b63c34;
        }
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar5,0);
LAB_03b63c34:
    uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_03b63de4;
      lVar11 = *plVar8;
      uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar10 == 0) goto LAB_03b63d60;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar10 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03b63c90;
        }
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar6,0);
LAB_03b63c90:
    auVar16 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    _in_stack_00000020 = auVar16;
    uVar10 = FUN_03b52f50(&stack0x00000020,0);
    if ((uVar10 & 1) == 0) {
      in_stack_00000010 = *(undefined8 *)(unaff_x20 + 0x48);
      in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x50);
      iVar12 = (int)((ulong)in_stack_00000018 >> 0x20);
      if (0 < iVar12) {
        iVar14 = 0;
        while( true ) {
          uVar2 = in_stack_00000028;
          uVar1 = in_stack_00000020;
          auVar16 = FUN_02616e1c(&stack0x00000010,iVar14,*unaff_x27);
          uVar10 = FUN_03b63650(uVar1,uVar2,auVar16._0_8_,auVar16._8_8_);
          if ((uVar10 & 1) != 0) break;
          bVar7 = iVar12 + -1 == iVar14;
          iVar14 = iVar14 + 1;
          if (bVar7) goto LAB_03b63be4;
          in_stack_00000010 = *(undefined8 *)(unaff_x20 + 0x48);
          in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x50);
        }
        bVar15 = true;
      }
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar13 = piVar13 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03b63dd8;
    }
  }
LAB_03b63d60:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_03b63dd8:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_03b63de4:
  return bVar3 || bVar15;
}


