/*
FUNCTION_NAME: Renci.SshNet.Session$$Dispose
ENTRY_POINT: 076256f4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076259f8) */

uint Renci_SshNet_Session__Dispose(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar13;
  undefined8 uVar14;
  long *unaff_x24;
  char cStack000000000000000c;
  
  lVar5 = thunk_FUN_03d2ee44();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d8e4();
  }
  *unaff_x21 = lVar5;
  lVar5 = thunk_FUN_03d2ee44();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d8e4();
  }
  thunk_FUN_03d1023c();
  if (*unaff_x21 == 0) {
    lVar5 = unaff_x19[2];
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    plVar13 = *(long **)(lVar5 + 0x48);
    plVar6 = (long *)FUN_07629c78(lVar5,0);
    uVar14 = *(undefined8 *)PTR_DAT_0922cfe8;
    if (plVar6 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    uVar14 = FUN_06fc5244(uVar14,uVar7,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar5 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_091d8088) {
          puVar8 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_076257e8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_03d8f370(plVar13,*(long *)PTR_DAT_091d8088,0);
LAB_076257e8:
    (*(code *)*puVar8)(plVar13,2,uVar14,puVar8[1]);
    if (*unaff_x21 == 0) {
      lVar5 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0922cfe0);
      FUN_07653ce0(lVar5,0);
      *unaff_x21 = lVar5;
      thunk_FUN_03d1023c();
    }
  }
  puVar3 = PTR_DAT_0922cf30;
  puVar2 = PTR_DAT_091d8b00;
  lVar5 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_StringLiteral_52485_091d8738);
  System_Collections_Generic_Dictionary<int,_CameraData>__get_Item(lVar5,1,*(undefined8 *)puVar2);
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar9 = *(long *)puVar3;
  }
  plVar6 = (long *)*unaff_x21;
  if (plVar6 != (long *)0x0) {
    lVar10 = *plVar6;
    uVar1 = **(undefined1 **)(lVar9 + 0xb8);
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x24) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_076258d4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_03d8f370(plVar6,*unaff_x24,1);
LAB_076258d4:
    uVar14 = (*(code *)*puVar8)(plVar6,puVar8[1]);
    if (lVar5 != 0) {
      FUN_069478c8(lVar5,uVar1,uVar14,*(undefined8 *)PTR_DAT_091d8b08);
      if (unaff_x20 == 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        FUN_07623d50();
        uVar4 = (**(code **)(*unaff_x19 + 0x228))();
      }
      else {
        cStack000000000000000c = '\0';
        FUN_071e78b0();
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        FUN_07623d50();
        uVar4 = (**(code **)(*unaff_x19 + 0x228))();
        if (cStack000000000000000c != '\0') {
          thunk_FUN_03d180a8();
        }
      }
      return uVar4 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


