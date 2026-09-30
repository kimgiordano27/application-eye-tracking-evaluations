/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRSpaceUser>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 021a3208
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRSpaceUser>__System_Collections_IEnumerator_Reset
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int iVar8;
  uint uVar9;
  
  lVar4 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_2) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto 
        System_Array_EmptyInternalEnumerator<OVRTelemetryMarker>__System_Collections_IEnumerator_Reset
        ;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_0185dba8();
System_Array_EmptyInternalEnumerator<OVRTelemetryMarker>__System_Collections_IEnumerator_Reset:
  uVar2 = (*(code *)*puVar3)();
  uVar1 = *(uint *)(unaff_x22 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar8 = 0;
  if (uVar1 != 0) {
    iVar8 = (int)uVar2 / (int)uVar1;
  }
  uVar9 = uVar2 - iVar8 * uVar1;
  if (uVar9 < uVar1) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar9 = *(int *)(unaff_x22 + (ulong)uVar9 * 4 + 0x20) - 1;
    if (uVar9 < uVar1) {
      iVar8 = 0;
      do {
        if (*(uint *)(unaff_x23 + (long)(int)uVar9 * 0x30 + 0x20) == uVar2) {
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4(lVar4);
          }
          lVar5 = *unaff_x21;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar4) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto System_Array_EmptyInternalEnumerator<object>__get_Current;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_0185dba8();
System_Array_EmptyInternalEnumerator<object>__get_Current:
          uVar6 = (*(code *)*puVar3)();
          if ((uVar6 & 1) != 0) {
            return uVar9;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= uVar9) goto LAB_021a3484;
        uVar9 = *(uint *)(unaff_x23 + (long)(int)uVar9 * 0x30 + 0x24);
        if ((int)uVar1 <= iVar8) {
          FUN_02befd44(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar8 = iVar8 + 1;
      } while (uVar9 < uVar1);
    }
    return uVar9;
  }
LAB_021a3484:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


