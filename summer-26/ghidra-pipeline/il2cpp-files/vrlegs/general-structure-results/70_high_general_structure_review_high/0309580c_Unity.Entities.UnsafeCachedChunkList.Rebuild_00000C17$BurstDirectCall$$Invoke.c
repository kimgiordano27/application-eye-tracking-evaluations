/*
FUNCTION_NAME: Unity.Entities.UnsafeCachedChunkList.Rebuild_00000C17$BurstDirectCall$$Invoke
ENTRY_POINT: 0309580c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_Entities_UnsafeCachedChunkList_Rebuild_00000C17_BurstDirectCall__Invoke
               (ulong param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long unaff_x20;
  long *plVar13;
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc0870);
    FUN_01ab69ac(FusionBurstIntegration_Unpack_0000008A_PostfixBurstDelegate_var);
    FUN_01ab69ac(PTR_DAT_03cc9270);
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(UnityEngine_InputSystem_MagneticFieldSensor_var);
    FUN_01ab69ac(PTR_DAT_03cc6580);
                    /* try { // try from 03095860 to 0319587b has its CatchHandler @ 030953d8 */
    FUN_01ab69ac(PTR_DAT_03cbdf20);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
                    /* try { // try from 0309587c to 0319587f has its CatchHandler @ 030958a0 */
    FUN_01ab69ac(Unity_Entities_IRefCounted_RefCountDelegate_var);
    FUN_01ab69ac(
                Unity_Entities_Internal_InternalCompilerInterface_MergeWith_00001827_PostfixBurstDelegate_var
                );
                    /* try { // try from 0309588c to 031958b7 has its CatchHandler @ 030958cc */
                    /* catch() { ... } // from try @ 030957dc with catch @ 03095894 */
    FUN_01ab69ac(
                Unity_Transforms_LocalToWorldSystem___codegen__OnCreate_00000022_PostfixBurstDelegate_var
                );
    *(undefined1 *)(unaff_x20 + 0x51e) = 1;
  }
  puVar1 = PTR_DAT_03cc9270;
                    /* catch() { ... } // from try @ 0309587c with catch @ 030958a0 */
  in_stack_00000008 = 0;
  if (*param_2 == 0) {
    in_stack_00000008 = *(undefined8 *)(param_2 + 0x12);
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    *param_2 = -1;
  }
  else {
                    /* try { // try from 030958b8 to 031958c3 has its CatchHandler @ 030953d8 */
    lVar4 = thunk_FUN_01a89e68(*(undefined8 *)
                                Unity_Entities_Internal_InternalCompilerInterface_MergeWith_00001827_PostfixBurstDelegate_var
                              );
                    /* try { // try from 030958c4 to 031958cb has its CatchHandler @ 030958cc */
    FUN_027b3d9c(lVar4,0);
    plVar13 = (long *)(param_2 + 0xc);
    *plVar13 = lVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13,lVar4);
    if (*(long *)(param_2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(undefined8 *)(*(long *)(param_2 + 0xc) + 0x18) = *(undefined8 *)(param_2 + 8);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    puVar5 = (undefined8 *)(*plVar13 + 0x10);
    *puVar5 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar5,0);
    if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    puVar5 = (undefined8 *)(*plVar13 + 0x20);
    *puVar5 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar5,0);
    plVar13 = *(long **)(param_2 + 10);
    uVar8 = *(undefined8 *)(param_2 + 0xc);
    uVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0870);
    FUN_026b1d64(uVar6,uVar8,*(undefined8 *)Unity_Entities_IRefCounted_RefCountDelegate_var,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar4 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)UnityEngine_InputSystem_MagneticFieldSensor_var) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_030959c4;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01a472ec(plVar13,*(long *)UnityEngine_InputSystem_MagneticFieldSensor_var,1);
LAB_030959c4:
    lVar4 = (*(code *)*puVar5)(plVar13,uVar6,puVar5[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    in_stack_00000008 = FUN_027e99e8(lVar4,0);
    uVar10 = FUN_02678c30(&stack0x00000008,0);
    if ((uVar10 & 1) == 0) {
      *param_2 = 0;
      *(undefined8 *)(param_2 + 0x12) = in_stack_00000008;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 0x12,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f2e2b8(param_2 + 2,&stack0x00000008,param_2,
                   *(undefined8 *)FusionBurstIntegration_Unpack_0000008A_PostfixBurstDelegate_var);
      return;
    }
  }
  FUN_02678cfc(&stack0x00000008,0);
  plVar13 = (long *)(param_2 + 0xc);
  if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar4 = *(long *)(*plVar13 + 0x18);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar3 = *(int *)(*(long *)(lVar4 + 0x18) + 0x18);
  lVar7 = *(long *)(param_2 + 0xe);
  if (iVar3 < 1) {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_036a2eb4(0x42c80000,lVar7,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(param_2 + 0x10),0,0,
                 0);
  }
  else {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar2 = FUN_036a3408(lVar7,0);
    if (iVar3 == iVar2) {
      if (*(long *)(param_2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = *(long *)(*(long *)(param_2 + 0xc) + 0x18);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar6 = *(undefined8 *)(lVar4 + 0x10);
      lVar7 = *(long *)(param_2 + 0xe);
      uVar8 = FUN_022195a8(*(long *)(lVar4 + 0x18),*(undefined8 *)PTR_DAT_03cc6580);
      if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = *(long *)(*plVar13 + 0x20);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(param_2 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar3 = FUN_036a3408(*(long *)(param_2 + 0xe),0);
      if (iVar3 == *(int *)(lVar4 + 0x18)) {
        lVar11 = *plVar13;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar4 = *(long *)(lVar11 + 0x20);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(int *)(lVar4 + 0x18) != *(int *)(*(long *)(lVar11 + 0x10) + 0x18)) {
          lVar4 = 0;
        }
      }
      else {
        lVar4 = 0;
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_036a2eb4(0x42c80000,lVar7,uVar6,uVar8,lVar4,0,0);
    }
    else {
      plVar9 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
      if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = *(long *)(*plVar13 + 0x18);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((lVar4 != 0) &&
         (lVar7 = thunk_FUN_01a89d6c(lVar4,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0)) {
        uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar8,0);
      }
      if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar9[4] = lVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9 + 4,lVar4);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367b588(*(undefined8 *)
                    Unity_Transforms_LocalToWorldSystem___codegen__OnCreate_00000022_PostfixBurstDelegate_var
                   ,plVar9,0);
    }
  }
  *param_2 = -2;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02679adc(param_2 + 2,0);
  return;
}


