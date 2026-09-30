/*
FUNCTION_NAME: Sentry.Protocol.Metrics.GaugeMetric.<SerializedStatsdValues>d__27$$System.IDisposable.Dispose
ENTRY_POINT: 09352340
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Sentry_Protocol_Metrics_GaugeMetric_<SerializedStatsdValues>d__27__System_IDisposable_Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong in_x9;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  int unaff_w25;
  long unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  long *unaff_x29;
  
  do {
    if (in_x9 != 0) {
      piVar12 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == param_3) {
          puVar5 = (undefined8 *)(param_1 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_09352380;
        }
        in_x9 = in_x9 - 1;
        piVar12 = piVar12 + 4;
      } while (in_x9 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68();
LAB_09352380:
    uVar6 = (*(code *)*puVar5)();
    iVar3 = FUN_0934859c(uVar6,1,0);
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x28) {
LAB_09352578:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    uVar2 = *(uint *)(unaff_x23 + 0x18);
    *(int *)(unaff_x21 + unaff_x27 * 4 + 0x20) = iVar3 + unaff_w25;
    if (uVar2 <= unaff_x24) goto LAB_09352578;
    lVar10 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    iVar3 = *(int *)(unaff_x23 + unaff_x24 * 4 + 0x20);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x29) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_09352414;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68();
LAB_09352414:
    uVar6 = (*(code *)*puVar5)();
    iVar4 = FUN_0934859c(uVar6,2,0);
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x28) goto LAB_09352578;
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    *(int *)(unaff_x23 + unaff_x27 * 4 + 0x20) = iVar4 + iVar3;
    if (uVar2 <= unaff_x24) goto LAB_09352578;
    lVar10 = *unaff_x19;
    iVar3 = *(int *)(unaff_x26 + 0x20);
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x29) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_093524a4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68();
LAB_093524a4:
    uVar6 = (*(code *)*puVar5)();
    iVar4 = FUN_0934859c(uVar6,3,0);
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x28) goto LAB_09352578;
    iVar1 = iVar4 + 0xf;
    if (-1 < iVar4) {
      iVar1 = iVar4;
    }
    unaff_x26 = unaff_x22 + unaff_x28 * 4;
    *(int *)(unaff_x26 + 0x20) = iVar3 + (iVar1 >> 4);
    lVar10 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac89840) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_09352270;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68();
LAB_09352270:
    iVar3 = (*(code *)*puVar5)();
    if ((long)iVar3 <= (long)unaff_x28) {
      if (*(int *)(*(long *)PTR_DAT_0ac40e58 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar6 = FUN_05c18ba4();
      uVar7 = FUN_05c18ba4();
      uVar8 = FUN_05c18ba4();
      uVar9 = FUN_05c18ba4();
      FUN_05c14b7c(uVar6,uVar7,uVar8,uVar9,*(undefined8 *)PTR_DAT_0ac89878);
      return;
    }
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x28) goto LAB_09352578;
    lVar10 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    iVar3 = *(int *)(unaff_x20 + unaff_x28 * 4 + 0x20);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x29) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_093522e4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68();
LAB_093522e4:
    uVar6 = (*(code *)*puVar5)();
    iVar4 = FUN_0934859c(uVar6,0,0);
    uVar11 = unaff_x28 + 1;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar11) goto LAB_09352578;
    unaff_x27 = (long)(int)uVar11;
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    *(int *)(unaff_x20 + unaff_x27 * 4 + 0x20) = iVar4 + iVar3;
    if (uVar2 <= unaff_x28) goto LAB_09352578;
    param_1 = *unaff_x19;
    param_3 = *unaff_x29;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_w25 = *(int *)(unaff_x21 + unaff_x28 * 4 + 0x20);
    unaff_x24 = unaff_x28;
    unaff_x28 = uVar11;
  } while( true );
}


