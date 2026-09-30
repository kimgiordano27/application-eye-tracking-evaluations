/*
FUNCTION_NAME: FUN_0514b028
ENTRY_POINT: 0514b028
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_0514b028(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 auStack_e8 [72];
  long local_a0;
  undefined1 auStack_98 [72];
  
  puVar2 = PTR_DAT_07282480;
                    /* try { // try from 0514b034 to 0524b04b has its CatchHandler @ 0514b080 */
  if ((DAT_076d302e & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07285ac8);
    thunk_FUN_032e1da0(PTR_DAT_07285ad0);
    thunk_FUN_032e1da0(PTR_DAT_07282480);
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    thunk_FUN_032e1da0(PTR_DAT_07285ab8);
    thunk_FUN_032e1da0(PTR_DAT_072824a0);
    thunk_FUN_032e1da0(PTR_DAT_07285ac0);
    thunk_FUN_032e1da0(PTR_DAT_072824a8);
    DAT_076d302e = 1;
  }
  local_a0 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar5 = FUN_058f0bac(0);
  if (lVar5 != 0) {
    FUN_04ed2508(lVar5,param_1,&local_a0,*(undefined8 *)PTR_DAT_07285ad0);
    if (local_a0 == 0) {
      return;
    }
    uVar3 = FUN_058311c0(local_a0,*(undefined8 *)PTR_DAT_072824a8,0);
    puVar1 = PTR_DAT_07279510;
    if (local_a0 != 0) {
      iVar4 = FUN_058311c0(local_a0,*(undefined8 *)PTR_DAT_07285ab8,0);
      lVar5 = local_a0;
      lVar7 = *(long *)puVar1;
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x168);
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar7);
      }
      uVar9 = FUN_059324dc(uVar9,0);
      if (lVar5 != 0) {
        lVar5 = FUN_0582f318(lVar5,*(undefined8 *)PTR_DAT_072824a0,uVar9,0);
        lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_032934b8(lVar7);
        }
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = thunk_FUN_032a55a4(lVar5,lVar7);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(lVar5,lVar7);
          }
        }
        *(long *)(param_1 + 0x30) = lVar6;
        lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_032934b8(lVar7);
        }
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = thunk_FUN_032a55a4(lVar5,lVar7);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(lVar5,lVar7);
          }
        }
        thunk_FUN_0333a630((long *)(param_1 + 0x30),lVar6);
        if (iVar4 == 0) {
          *(undefined8 *)(param_1 + 0x10) = 0;
          thunk_FUN_0333a630((undefined8 *)(param_1 + 0x10),0);
        }
        else {
          FUN_0514aa5c(param_1,iVar4,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10));
          lVar5 = local_a0;
          uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x180);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar9 = FUN_059324dc(uVar9,0);
          if (lVar5 == 0)
          goto 
          System_Array_EmptyInternalEnumerator<AsyncGPUReadbackRequest>__System_Collections_IEnumerator_Reset
          ;
          lVar5 = FUN_0582f318(lVar5,*(undefined8 *)PTR_DAT_07285ac0,uVar9,0);
          lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x140);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_032934b8(lVar7);
          }
          if (lVar5 == 0) {
            FUN_0594477c(0x10,0);
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar6 = thunk_FUN_032a55a4(lVar5,lVar7);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(lVar5,lVar7);
          }
          if (0 < *(int *)(lVar6 + 0x18)) {
            uVar10 = 0;
            plVar11 = (long *)(lVar6 + 0x20);
            do {
              uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
              if (uVar8 <= uVar10) {
LAB_0514b3e4:
                    /* WARNING: Subroutine does not return */
                Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
              }
              if (*plVar11 == 0) {
                FUN_0594477c(0x11,0);
                uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
              }
              if (uVar8 <= uVar10) goto LAB_0514b3e4;
              lVar7 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
              lVar5 = *plVar11;
              memcpy(auStack_e8,plVar11 + 1,0x48);
              uVar9 = *(undefined8 *)
                       (*(long *)(*(long *)(*(long *)(lVar7 + 0x80) + 0x20) + 0xc0) + 0x110);
              memcpy(auStack_98,auStack_e8,0x48);
              System_Array_EmptyInternalEnumerator<ARRaycastHit>__get_Current
                        (param_1,lVar5,auStack_98,2,uVar9);
              uVar10 = uVar10 + 1;
              plVar11 = plVar11 + 10;
            } while ((long)uVar10 < (long)*(int *)(lVar6 + 0x18));
          }
        }
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        lVar5 = FUN_058f0bac(0);
        if (lVar5 != 0) {
          FUN_04ed22b8(lVar5,param_1,*(undefined8 *)PTR_DAT_07285ac8);
          return;
        }
      }
    }
  }
System_Array_EmptyInternalEnumerator<AsyncGPUReadbackRequest>__System_Collections_IEnumerator_Reset:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


