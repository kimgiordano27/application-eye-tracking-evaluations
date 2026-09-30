/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$get_Current
ENTRY_POINT: 06651d7c
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Current
               (int *param_1,int param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iStack000000000000000c;
  
  if (-1 < param_2) {
    iVar1 = *param_1;
    if (param_2 < iVar1) {
      iStack000000000000000c = iVar1 + -1;
      if (param_2 == 0) {
        uVar2 = iVar1 - 2;
        if (1 < iVar1) {
          lVar3 = *(long *)(param_1 + 6);
          if (lVar3 != 0) {
            if (uVar2 < *(uint *)(lVar3 + 0x18)) {
              lVar3 = lVar3 + (ulong)uVar2 * 0x10;
              uVar6 = *(undefined8 *)(lVar3 + 0x20);
              *(undefined8 *)(param_1 + 4) = *(undefined8 *)(lVar3 + 0x28);
              *(undefined8 *)(param_1 + 2) = uVar6;
              thunk_FUN_049ee3d8(param_1 + 2,0);
              lVar3 = *(long *)(param_1 + 6);
              if (lVar3 == 0) goto LAB_06651e94;
              if (uVar2 < *(uint *)(lVar3 + 0x18)) {
                lVar3 = lVar3 + (ulong)uVar2 * 0x10;
                puVar4 = (undefined8 *)(lVar3 + 0x20);
                *puVar4 = 0;
                *(undefined8 *)(lVar3 + 0x28) = 0;
                thunk_FUN_049ee3d8(puVar4,0);
                goto LAB_06651e38;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_04948194();
          }
LAB_06651e94:
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
      }
      else {
        lVar3 = *(long *)(param_3 + 0x20);
        uVar6 = *(undefined8 *)(param_1 + 6);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_04980b34();
        }
        FUN_05a0de94(uVar6,&stack0x0000000c,param_2 + -1,
                     *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 200));
      }
LAB_06651e38:
      *param_1 = *param_1 + -1;
      return;
    }
  }
  thunk_FUN_049ae08c(PTR_DAT_0ac0c088);
  uVar6 = thunk_FUN_04983f60();
  uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac161d0);
  FUN_08cc57b4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_04948050(uVar6,param_3);
}


