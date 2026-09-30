/*
FUNCTION_NAME: FUN_03a3ae98
ENTRY_POINT: 03a3ae98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03a3b1d4) */
/* WARNING: Removing unreachable block (ram,0x03a3b41c) */
/* WARNING: Removing unreachable block (ram,0x03a3b410) */

long * FUN_03a3ae98(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int *piVar15;
  
  puVar2 = Method_System_MemoryExtensions_EndsWith<char>__;
  if ((DAT_04838c02 & 1) == 0) {
                    /* catch() { ... } // from try @ 03a3ae40 with catch @ 03a3aecc
                       try { // try from 03a3aecc to 03b3aef7 has its CatchHandler @ 03a3a1e0 */
    thunk_FUN_01efb3a4(StringLiteral_7186);
                    /* catch() { ... } // from try @ 03a3a690 with catch @ 03a3aedc
                       catch() { ... } // from try @ 03a3ac0c with catch @ 03a3aedc */
    thunk_FUN_01efb3a4(Method_System_Reflection_MethodInfo_GetGenericMethodDefinition__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* try { // try from 03a3aef8 to 03b3aefb has its CatchHandler @ 03a3af74 */
    thunk_FUN_01efb3a4(Method_System_MemoryExtensions_EndsWith<char>__);
    thunk_FUN_01efb3a4(Method_System_Reflection_MethodInfo_MakeGenericMethod__);
    thunk_FUN_01efb3a4(StringLiteral_5831);
    thunk_FUN_01efb3a4(StringLiteral_7181);
    DAT_04838c02 = 1;
  }
  uVar5 = FUN_0340eec4(param_3,0);
  if ((uVar5 & 1) == 0) {
    lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 03a3aef8 with catch @ 03a3af74
                       try { // try from 03a3af74 to 03b3af9f has its CatchHandler @ 03a3a1e0 */
    FUN_033d1fe4(lVar6,param_2,param_3,0);
  }
  else {
                    /* try { // try from 03a3af40 to 03b3af73 has its CatchHandler @ 03a3b0d4 */
    lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_033d1fe4(lVar6,param_2,0,0);
  }
                    /* catch() { ... } // from try @ 03a3a4c0 with catch @ 03a3af84
                       catch() { ... } // from try @ 03a3abd8 with catch @ 03a3af84 */
  if ((lVar6 != 0) && (lVar7 = FUN_033d32e0(lVar6,0), lVar7 != 0)) {
    iVar4 = FUN_0353e620(lVar7,0);
    if (iVar4 == 0) {
      return (long *)0x0;
    }
                    /* try { // try from 03a3afa0 to 03b3afa3 has its CatchHandler @ 03a3b01c */
    plVar8 = (long *)FUN_033d2a2c(lVar6,0);
    if (plVar8 != (long *)0x0) {
      iVar4 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
      if (iVar4 == 0) {
        lVar6 = FUN_033d32e0(lVar6,0);
        if (lVar6 != 0) {
          plVar8 = (long *)FUN_033dccfc(lVar6,0,0);
          return plVar8;
        }
      }
      else {
        plVar8 = (long *)FUN_033d2a2c(lVar6,0);
        if ((plVar8 != (long *)0x0) &&
           (plVar8 = (long *)(**(code **)(*plVar8 + 0x2e8))
                                       (plVar8,0,*(undefined8 *)(*plVar8 + 0x2f0)),
           plVar8 != (long *)0x0)) {
                    /* try { // try from 03a3afe8 to 03b3b01b has its CatchHandler @ 03a3b0d4 */
          bVar1 = *(byte *)(*(long *)StringLiteral_7186 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)StringLiteral_7186)) {
                    /* catch() { ... } // from try @ 03a3afa0 with catch @ 03a3b01c
                       try { // try from 03a3b01c to 03b3b047 has its CatchHandler @ 03a3a1e0 */
                    /* catch() { ... } // from try @ 03a3aacc with catch @ 03a3b02c
                       catch() { ... } // from try @ 03a3abdc with catch @ 03a3b02c */
            uVar9 = (**(code **)(*plVar8 + 0x1c8))(plVar8,0,*(undefined8 *)(*plVar8 + 0x1d0));
            lVar7 = FUN_033d32e0(lVar6,0);
            if (lVar7 != 0) {
                    /* try { // try from 03a3b048 to 03b3b04b has its CatchHandler @ 03a3b058 */
              lVar7 = FUN_033d442c(lVar7,0);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              do {
                do {
                    /* catch() { ... } // from try @ 03a3b048 with catch @ 03a3b058 */
                  uVar5 = FUN_033d485c(lVar7,0);
                  if ((uVar5 & 1) == 0) {
                    plVar10 = (long *)0x0;
                    goto LAB_03a3b150;
                  }
                  plVar10 = (long *)FUN_033d4484(lVar7,0);
                  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  lVar11 = (**(code **)(*plVar10 + 0x1d8))
                                     (plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
                  if (lVar11 != 0) {
                    /* try { // try from 03a3b098 to 03b3b0bf has its CatchHandler @ 03a3b0d4 */
                    plVar12 = (long *)(**(code **)(*plVar10 + 0x1d8))
                                                (plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
                    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    uVar13 = (**(code **)(*plVar12 + 0x1c8))
                                       (plVar12,0,*(undefined8 *)(*plVar12 + 0x1d0));
                    uVar5 = thunk_FUN_0340e318(uVar9,uVar13,0);
                    /* try { // try from 03a3b0c0 to 03b3b0cb has its CatchHandler @ 03a3a1e0 */
                    if ((uVar5 & 1) != 0) goto LAB_03a3b150;
                  }
                    /* try { // try from 03a3b0cc to 03b3b0d3 has its CatchHandler @ 03a3b0d4 */
                  lVar11 = FUN_033d4574(plVar10,0);
                } while (lVar11 == 0);
                    /* catch() { ... } // from try @ 03a3addc with catch @ 03a3b0d4
                       catch() { ... } // from try @ 03a3ae94 with catch @ 03a3b0d4
                       catch() { ... } // from try @ 03a3af40 with catch @ 03a3b0d4
                       catch() { ... } // from try @ 03a3afe8 with catch @ 03a3b0d4
                       catch() { ... } // from try @ 03a3b098 with catch @ 03a3b0d4
                       catch() { ... } // from try @ 03a3b0cc with catch @ 03a3b0d4 */
                    /* try { // try from 03a3b0d8 to 03b3b27f has its CatchHandler @ 03a3b0d8
                       catch() { ... } // from try @ 03a3b0d8 with catch @ 03a3b0d8
                       catch() { ... } // from try @ 03a3b2d8 with catch @ 03a3b0d8
                       catch() { ... } // from try @ 03a3b9a4 with catch @ 03a3b0d8
                       catch() { ... } // from try @ 03a3bb34 with catch @ 03a3b0d8
                       catch() { ... } // from try @ 03a3bcb8 with catch @ 03a3b0d8
                       catch() { ... } // from try @ 03a3bcf8 with catch @ 03a3b0d8
                       catch() { ... } // from try @ 03a3bd2c with catch @ 03a3b0d8
                       catch() { ... } // from try @ 03a3bddc with catch @ 03a3b0d8
                       catch() { ... } // from try @ 03a3be84 with catch @ 03a3b0d8
                       catch() { ... } // from try @ 03a3bf24 with catch @ 03a3b0d8
                       catch() { ... } // from try @ 03a3bfcc with catch @ 03a3b0d8 */
                plVar12 = (long *)FUN_033d4574(plVar10,0);
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar13 = (**(code **)(*plVar12 + 0x1c8))
                                   (plVar12,0,*(undefined8 *)(*plVar12 + 0x1d0));
                uVar5 = thunk_FUN_0340e318(uVar9,uVar13,0);
              } while ((uVar5 & 1) == 0);
LAB_03a3b150:
              puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
              plVar12 = (long *)thunk_FUN_01f116d0(lVar7,*(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                                  );
              if (plVar12 != (long *)0x0) {
                lVar7 = *plVar12;
                uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar5 != 0) {
                  piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                      puVar14 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_03a3b1bc;
                    }
                    uVar5 = uVar5 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar5 != 0);
                }
                puVar14 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar2,0);
LAB_03a3b1bc:
                (*(code *)*puVar14)(plVar12,puVar14[1]);
              }
              if (plVar10 == (long *)0x0) {
                lVar7 = FUN_033d32e0(lVar6,0);
                if (lVar7 == 0) goto LAB_03a3b3fc;
                plVar10 = (long *)FUN_033dccfc(lVar7,0,0);
              }
              else {
                bVar1 = *(byte *)(*(long *)Method_System_Reflection_MethodInfo_MakeGenericMethod__ +
                                 0x130);
                if (*(byte *)(*plVar8 + 0x130) < bVar1) {
                  plVar12 = (long *)0x0;
                }
                else {
                  plVar12 = plVar8;
                  if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)Method_System_Reflection_MethodInfo_MakeGenericMethod__) {
                    plVar12 = (long *)0x0;
                  }
                }
                (**(code **)(*plVar10 + 0x1e8))(plVar10,plVar12,*(undefined8 *)(*plVar10 + 0x1f0));
                bVar1 = *(byte *)(*(long *)
                                   Method_System_Reflection_MethodInfo_GetGenericMethodDefinition__
                                 + 0x130);
                if (*(byte *)(*plVar8 + 0x130) < bVar1) {
                  plVar8 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                         *(long *)Method_System_Reflection_MethodInfo_GetGenericMethodDefinition__)
                {
                  plVar8 = (long *)0x0;
                }
                FUN_033dbb74(plVar10,plVar8,0);
              }
              lVar7 = FUN_033d32e0(lVar6,0);
              if (lVar7 != 0) {
                iVar4 = FUN_0353e620(lVar7,0);
                if (1 < iVar4) {
                  lVar7 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_7181);
                  FUN_03a3b658();
                  plVar8 = (long *)(param_1 + 0xb0);
                  *plVar8 = lVar7;
                  thunk_FUN_01f51358(plVar8,lVar7);
                  lVar6 = FUN_033d32e0(lVar6,0);
                  if (lVar6 == 0) goto LAB_03a3b3fc;
                  lVar6 = FUN_033d442c(lVar6,0);
                  puVar3 = StringLiteral_5831;
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  while (uVar5 = FUN_033d485c(lVar6,0), (uVar5 & 1) != 0) {
                    plVar12 = (long *)FUN_033d4484(lVar6,0);
                    if (plVar12 != plVar10) {
                      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
                      FUN_03451ddc(lVar7,0);
                      *(long *)(lVar7 + 0xb8) = (long)plVar12;
                      thunk_FUN_01f51358((long *)(lVar7 + 0xb8),plVar12);
                      if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      FUN_03a3b6e0(*plVar8,lVar7,1);
                    }
                  }
                  plVar8 = (long *)thunk_FUN_01f116d0(lVar6,*(undefined8 *)puVar2);
                  if (plVar8 != (long *)0x0) {
                    lVar6 = *plVar8;
                    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    if (uVar5 != 0) {
                      piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                          puVar14 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
                          goto LAB_03a3b3cc;
                        }
                        uVar5 = uVar5 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar5 != 0);
                    }
                    puVar14 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_03a3b3cc:
                    (*(code *)*puVar14)(plVar8,puVar14[1]);
                  }
                }
                return plVar10;
              }
            }
          }
        }
      }
    }
  }
LAB_03a3b3fc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


