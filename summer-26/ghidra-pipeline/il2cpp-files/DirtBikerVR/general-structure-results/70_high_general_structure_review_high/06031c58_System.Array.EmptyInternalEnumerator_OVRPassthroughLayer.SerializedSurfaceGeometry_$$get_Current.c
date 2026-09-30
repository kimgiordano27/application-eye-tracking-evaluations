/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$get_Current
ENTRY_POINT: 06031c58
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  puVar2 = PTR_DAT_08493f90;
  if ((DAT_08979b97 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08496a50);
    FUN_03a8a718(PTR_DAT_08496a58);
    FUN_03a8a718(PTR_DAT_08493f90);
    FUN_03a8a718(PTR_DAT_08496a40);
    FUN_03a8a718(PTR_DAT_08493fb0);
    FUN_03a8a718(PTR_DAT_08496a48);
    FUN_03a8a718(PTR_DAT_0848afa0);
    DAT_08979b97 = 1;
  }
  in_stack_00000008 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar5 = FUN_066ebd18(0);
  if (lVar5 != 0) {
    FUN_05d5dc14(lVar5,param_1,&stack0x00000008,*(undefined8 *)PTR_DAT_08496a58);
    if (in_stack_00000008 == 0) {
      return;
    }
    uVar3 = FUN_066519f8(in_stack_00000008,*(undefined8 *)PTR_DAT_0848afa0,0);
    if (in_stack_00000008 != 0) {
      iVar4 = FUN_066519f8(in_stack_00000008,*(undefined8 *)PTR_DAT_08496a40,0);
      lVar5 = in_stack_00000008;
      puVar1 = PTR_DAT_08486760;
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x170);
      if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)(PTR_DAT_08486760 + 0xe0));
      }
      uVar9 = FUN_0675ff58(uVar9,0);
      if (lVar5 != 0) {
        lVar5 = FUN_0664f828(lVar5,*(undefined8 *)PTR_DAT_08493fb0,uVar9,0);
        lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_03ac4090(lVar10);
        }
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = thunk_FUN_03ac73c0(lVar5,lVar10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8ad40(lVar5,lVar10);
          }
        }
        lVar10 = *(long *)(param_3 + 0x20);
        *(long *)(param_1 + 0x30) = lVar6;
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_03ac4090(lVar10);
        }
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = thunk_FUN_03ac73c0(lVar5,lVar10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8ad40(lVar5,lVar10);
          }
        }
        thunk_FUN_03afed3c((long *)(param_1 + 0x30),lVar6);
        if (iVar4 == 0) {
          *(undefined8 *)(param_1 + 0x10) = 0;
          thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x10),0);
        }
        else {
          FUN_060316b0(param_1,iVar4,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10));
          lVar5 = in_stack_00000008;
          uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x188);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar9 = FUN_0675ff58(uVar9,0);
          if (lVar5 == 0) goto LAB_06031fcc;
          lVar5 = FUN_0664f828(lVar5,*(undefined8 *)PTR_DAT_08496a48,uVar9,0);
          lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148);
          if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_03ac4090(lVar10);
          }
          if (lVar5 == 0) {
            FUN_06771ef4(0x10,0);
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar6 = thunk_FUN_03ac73c0(lVar5,lVar10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8ad40(lVar5,lVar10);
          }
          if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
            uVar8 = 0;
            uVar7 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
            puVar11 = (undefined8 *)(lVar6 + 0x24);
            do {
              if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c8();
              }
              in_stack_00000018 = puVar11[1];
              in_stack_00000010 = *puVar11;
              in_stack_00000020 = puVar11[2];
              System_Array_EmptyInternalEnumerator<OVRLocatable_TrackingSpacePose>___cctor
                        (param_1,*(undefined4 *)((long)puVar11 + -4),&stack0x00000010,2,
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0)
                                                        + 0x80) + 0x20) + 0xc0) + 0x118));
              uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
              uVar8 = uVar8 + 1;
              puVar11 = (undefined8 *)((long)puVar11 + 0x1c);
            } while ((long)uVar8 < (long)(int)*(uint *)(lVar6 + 0x18));
          }
        }
        lVar5 = *(long *)puVar2;
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        lVar5 = FUN_066ebd18(0);
        if (lVar5 != 0) {
          FUN_05d5d9b4(lVar5,param_1,*(undefined8 *)PTR_DAT_08496a50);
          return;
        }
      }
    }
  }
LAB_06031fcc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


