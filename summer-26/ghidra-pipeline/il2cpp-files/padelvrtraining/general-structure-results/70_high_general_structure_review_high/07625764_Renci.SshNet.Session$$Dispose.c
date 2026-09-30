/*
FUNCTION_NAME: Renci.SshNet.Session$$Dispose
ENTRY_POINT: 07625764
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076259f8) */

uint Renci_SshNet_Session__Dispose(long *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar12;
  long *unaff_x24;
  char cStack000000000000000c;
  
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
  }
  FUN_06fc5244();
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar8 = *unaff_x22;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_091d8088) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_076257e8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_03d8f370();
LAB_076257e8:
  (*(code *)*puVar5)();
  if (*unaff_x21 == 0) {
    lVar8 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0922cfe0);
    FUN_07653ce0(lVar8,0);
    *unaff_x21 = lVar8;
    thunk_FUN_03d1023c();
  }
  puVar3 = PTR_DAT_0922cf30;
  puVar2 = PTR_DAT_091d8b00;
  lVar8 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_StringLiteral_52485_091d8738);
  System_Collections_Generic_Dictionary<int,_CameraData>__get_Item(lVar8,1,*(undefined8 *)puVar2);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar6 = *(long *)puVar3;
  }
  plVar12 = (long *)*unaff_x21;
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar1 = **(undefined1 **)(lVar6 + 0xb8);
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x24) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_076258d4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03d8f370(plVar12,*unaff_x24,1);
LAB_076258d4:
    uVar7 = (*(code *)*puVar5)(plVar12,puVar5[1]);
    if (lVar8 != 0) {
      FUN_069478c8(lVar8,uVar1,uVar7,*(undefined8 *)PTR_DAT_091d8b08);
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


