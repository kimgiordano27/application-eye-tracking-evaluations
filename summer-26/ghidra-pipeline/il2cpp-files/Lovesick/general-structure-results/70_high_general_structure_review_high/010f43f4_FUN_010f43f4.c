/*
FUNCTION_NAME: FUN_010f43f4
ENTRY_POINT: 010f43f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_17;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_13;frame_or_lifecycle_behavior
*/


void FUN_010f43f4(undefined8 *param_1,long param_2,undefined8 ****param_3,long param_4,long param_5)

{
  int iVar1;
  undefined8 ****ppppuVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined8 *local_1a0;
  long local_198;
  uint local_18c;
  ulong local_188;
  long local_180;
  long local_178;
  uint local_16c;
  uint local_168;
  uint local_164;
  long local_160;
  ulong local_158;
  uint local_14c;
  long local_148;
  long local_140;
  int local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 ***local_b8;
  int *local_b0;
  int local_a8;
  undefined4 uStack_a4;
  int local_9c;
  long local_98;
  
                    /* try { // try from 010f4404 to 011f451f has its CatchHandler @ 010f4404
                       catch() { ... } // from try @ 010f4404 with catch @ 010f4404
                       catch() { ... } // from try @ 010f4594 with catch @ 010f4404
                       catch() { ... } // from try @ 010f45e0 with catch @ 010f4404
                       catch() { ... } // from try @ 010f4614 with catch @ 010f4404
                       catch() { ... } // from try @ 010f4648 with catch @ 010f4404 */
  lVar11 = tpidr_el0;
  local_98 = *(long *)(lVar11 + 0x28);
  plVar12 = *(long **)(param_5 + 0x38);
  local_b8 = param_3;
  if (plVar12 == (long *)0x0) {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
                      );
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                      );
    thunk_FUN_00d48444(Method_System_Xml_Schema_XmlSchemaInference_InferSchema1__);
    thunk_FUN_00d48444(StringLiteral_11678);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    plVar12 = *(long **)(param_5 + 0x38);
    if (plVar12 == (long *)0x0) {
      FUN_00d59478(param_5);
      plVar12 = *(long **)(param_5 + 0x38);
    }
  }
  lVar6 = *plVar12;
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  if (*(int *)(lVar6 + 0x28) < 0) {
    uVar7 = thunk_FUN_00d42afc();
  }
  else {
    uVar7 = 0x18;
  }
  lVar10 = (long)&local_1a0 - ((uVar7 & 0xffffffff) + 0xf & 0x1fffffff0);
  lVar6 = **(long **)(param_5 + 0x38);
  local_148 = lVar10;
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  if (*(int *)(lVar6 + 0x28) < 0) {
    uVar7 = thunk_FUN_00d42afc();
  }
  else {
    uVar7 = 0x18;
  }
  lVar10 = lVar10 - ((uVar7 & 0xffffffff) + 0xf & 0x1fffffff0);
                    /* try { // try from 010f4520 to 011f4527 has its CatchHandler @ 010f45fc */
  lVar6 = **(long **)(param_5 + 0x38);
  local_160 = lVar10;
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                    /* try { // try from 010f4530 to 011f4537 has its CatchHandler @ 010f45f4 */
    lVar6 = FUN_00d5941c();
  }
  if (*(int *)(lVar6 + 0x28) < 0) {
    uVar7 = thunk_FUN_00d42afc();
  }
  else {
                    /* try { // try from 010f453c to 011f4543 has its CatchHandler @ 010f45f8 */
    uVar7 = 0x18;
  }
  local_140 = lVar10 - ((uVar7 & 0xffffffff) + 0xf & 0x1fffffff0);
  local_128 = 0;
                    /* try { // try from 010f4574 to 011f4593 has its CatchHandler @ 010f4600 */
  local_130 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_108 = 0;
  local_110 = 0;
                    /* try { // try from 010f4594 to 011f45cf has its CatchHandler @ 010f4404 */
  local_134 = 0;
  if ((*(long *)(param_2 + 0x10) == 0) ||
     (uVar7 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x18), uVar7 == 0)) {
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    *param_1 = 0x3f00000000000000;
    param_1[9] = 0;
    goto LAB_010f4c20;
  }
  FUN_012f7864(&local_e0,4,uVar7 & 0xffffffff,*(undefined8 *)StringLiteral_11678);
  iVar14 = (int)uVar7;
  if (iVar14 < 1) {
    fVar15 = 0.0;
    uVar4 = 1;
LAB_010f4bcc:
    uVar9 = 0;
  }
  else {
                    /* try { // try from 010f45d0 to 011f45d3 has its CatchHandler @ 010f45f0 */
                    /* try { // try from 010f45d4 to 011f45d7 has its CatchHandler @ 010f45ec */
                    /* try { // try from 010f45d8 to 011f45db has its CatchHandler @ 010f45e8 */
                    /* try { // try from 010f45dc to 011f45df has its CatchHandler @ 010f45e4 */
                    /* try { // try from 010f45e0 to 011f460f has its CatchHandler @ 010f4404 */
    local_14c = 0;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f45dc with catch @ 010f45e4
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f45d8 with catch @ 010f45e8
                        */
    local_18c = 0;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f45d4 with catch @ 010f45ec
                        */
    local_188 = (ulong)(iVar14 - 1);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f45d0 with catch @ 010f45f0
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f4530 with catch @ 010f45f4
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f453c with catch @ 010f45f8
                        */
    local_180 = (long)iVar14;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f4520 with catch @ 010f45fc
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f4574 with catch @ 010f4600
                        */
    local_158 = uVar7 & 0xffffffff;
                    /* try { // try from 010f4610 to 011f4613 has its CatchHandler @ 010f4638 */
                    /* try { // try from 010f4614 to 011f463f has its CatchHandler @ 010f4404 */
    local_168 = 1;
    uVar7 = 0;
    fVar15 = 0.0;
                    /* catch() { ... } // from try @ 010f4610 with catch @ 010f4638 */
    local_16c = 1;
                    /* try { // try from 010f4640 to 011f4647 has its CatchHandler @ 010f465c */
    local_1a0 = param_1;
    local_198 = lVar11;
    local_178 = param_2;
    do {
      lVar11 = *(long *)(param_2 + 0x10);
                    /* try { // try from 010f4648 to 011f4653 has its CatchHandler @ 010f4404 */
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
                    /* try { // try from 010f4654 to 011f465b has its CatchHandler @ 010f465c */
      if (*(uint *)(lVar11 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 010f4640 with catch @ 010f465c
                       catch(type#2 @ 00000000) { ... } // from try @ 010f4654 with catch @ 010f465c
                        */
                    /* try { // try from 010f4660 to 011f479b has its CatchHandler @ 010f4660
                       catch() { ... } // from try @ 010f4660 with catch @ 010f4660
                       catch() { ... } // from try @ 010f48e0 with catch @ 010f4660
                       catch() { ... } // from try @ 010f492c with catch @ 010f4660
                       catch() { ... } // from try @ 010f49d0 with catch @ 010f4660
                       catch() { ... } // from try @ 010f4a28 with catch @ 010f4660
                       catch() { ... } // from try @ 010f4a44 with catch @ 010f4660
                       catch() { ... } // from try @ 010f4a7c with catch @ 010f4660
                       catch() { ... } // from try @ 010f4abc with catch @ 010f4660
                       catch() { ... } // from try @ 010f4ad0 with catch @ 010f4660
                       catch() { ... } // from try @ 010f4b18 with catch @ 010f4660 */
      uVar4 = FUN_0213da28(lVar11 + uVar7 * 0x10 + 0x20,0);
      lVar11 = *(long *)(param_2 + 0x10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar5 = FUN_0213d8b0(lVar11 + uVar7 * 0x10 + 0x20,0);
      if ((local_14c & uVar4 & 1) == 0) {
        lVar11 = *(long *)(param_2 + 0x10);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        local_164 = uVar5;
        if (*(uint *)(lVar11 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar13 = *(undefined8 *)(lVar11 + uVar7 * 0x10 + 0x20);
        uVar8 = FUN_015ff8a0(uVar13,0);
        if ((uVar8 & 1) == 0) {
          iVar14 = 0;
          fVar16 = fVar15 + 1.0;
          while( true ) {
            plVar12 = *(long **)(param_5 + 0x38);
            lVar11 = *plVar12;
            if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
              lVar11 = FUN_00d5941c(lVar11);
              plVar12 = *(long **)(param_5 + 0x38);
            }
            lVar6 = *plVar12;
            lVar10 = plVar12[2];
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            ppppuVar2 = (undefined8 ****)local_b8;
            if (-1 < *(int *)(lVar6 + 0x28)) {
              ppppuVar2 = &local_b8;
            }
            FUN_00da59dc(lVar11,lVar10,local_140,ppppuVar2,0,&local_a8);
            if (local_a8 <= iVar14) {
              lVar11 = 0;
              param_2 = local_178;
              fVar16 = fVar15;
              goto LAB_010f49ac;
            }
            plVar12 = *(long **)(param_5 + 0x38);
            lVar11 = *plVar12;
                    /* try { // try from 010f479c to 011f47a3 has its CatchHandler @ 010f4aec */
            if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
              lVar11 = FUN_00d5941c(lVar11);
              plVar12 = *(long **)(param_5 + 0x38);
                    /* try { // try from 010f47ac to 011f47b3 has its CatchHandler @ 010f4ae0 */
            }
            lVar6 = *plVar12;
            lVar10 = plVar12[1];
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
                    /* try { // try from 010f47cc to 011f47d3 has its CatchHandler @ 010f4ae4 */
            local_b0 = &local_9c;
            ppppuVar2 = (undefined8 ****)local_b8;
            if (-1 < *(int *)(lVar6 + 0x28)) {
              ppppuVar2 = &local_b8;
            }
                    /* try { // try from 010f47e8 to 011f47ef has its CatchHandler @ 010f4900 */
            local_9c = iVar14;
            FUN_00da59dc(lVar11,lVar10,local_148,ppppuVar2,&local_b0,&local_a8);
                    /* try { // try from 010f47f8 to 011f47ff has its CatchHandler @ 010f48f8 */
            lVar11 = CONCAT44(uStack_a4,local_a8);
            lVar6 = lVar11;
                    /* try { // try from 010f4808 to 011f4813 has its CatchHandler @ 010f48fc */
            if (((param_4 != 0) && (lVar6 = param_4, iVar14 != 0)) &&
               (lVar6 = lVar11, lVar11 == param_4)) {
              plVar12 = *(long **)(param_5 + 0x38);
              lVar11 = *plVar12;
              if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
                lVar11 = FUN_00d5941c(lVar11);
                plVar12 = *(long **)(param_5 + 0x38);
              }
              lVar6 = *plVar12;
              lVar10 = plVar12[1];
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
                    /* try { // try from 010f4844 to 011f484f has its CatchHandler @ 010f490c */
              local_9c = 0;
              local_b0 = &local_9c;
              ppppuVar2 = (undefined8 ****)local_b8;
              if (-1 < *(int *)(lVar6 + 0x28)) {
                ppppuVar2 = &local_b8;
              }
                    /* try { // try from 010f485c to 011f486b has its CatchHandler @ 010f4908 */
              FUN_00da59dc(lVar11,lVar10,local_160,ppppuVar2,&local_b0,&local_a8);
                    /* try { // try from 010f487c to 011f4897 has its CatchHandler @ 010f4904 */
              lVar6 = CONCAT44(uStack_a4,local_a8);
            }
            lVar11 = FUN_02141568(lVar6,uVar13,0,0);
                    /* try { // try from 010f48ac to 011f48b3 has its CatchHandler @ 010f4adc */
            if ((lVar11 != 0) &&
               (uVar8 = FUN_012f8ee4(&local_e0,lVar11,
                                     *(undefined8 *)
                                      Method_System_Xml_Schema_XmlSchemaInference_InferSchema1__),
               (uVar8 & 1) == 0)) break;
                    /* try { // try from 010f48bc to 011f48bf has its CatchHandler @ 010f48f4 */
            iVar14 = iVar14 + 1;
          }
          uVar13 = FUN_02149ef4(uVar13,0);
          FUN_021f605c(&local_130,uVar13,0);
          uVar8 = FUN_021fe5e8(&local_130,0);
          param_2 = local_178;
          if ((uVar8 & 1) == 0) {
            lVar6 = *(long *)(lVar11 + 0x78);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar13 = *(undefined8 *)(lVar6 + 0x58);
            uVar3 = *(undefined8 *)(lVar6 + 0x60);
            lVar6 = *(long *)
                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
            ;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar6 = *(long *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
              ;
            }
            uVar8 = FUN_021ee9fc(*(long *)(lVar6 + 0xb8) + 0x10,local_130,local_128,uVar13,uVar3,
                                 &local_134,0);
            iVar14 = local_134;
            if ((uVar8 & 1) != 0) {
              if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              iVar1 = -iVar14;
              if (-1 < iVar14) {
                iVar1 = iVar14;
              }
              fVar16 = fVar15 + 1.0 / (float)(iVar1 + 1) + 1.0;
            }
          }
LAB_010f49ac:
          uVar8 = uVar7 + 1;
          if ((long)uVar8 < local_180) {
            lVar6 = *(long *)(param_2 + 0x10);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            uVar8 = FUN_0213da28(lVar6 + uVar8 * 0x10 + 0x20,0);
            if ((uVar8 & 1) == 0) goto LAB_010f4a30;
            local_18c = local_18c | (uint)(lVar11 == 0) & (local_164 ^ 1);
            local_14c = local_14c | lVar11 != 0;
          }
          else {
LAB_010f4a30:
            if (uVar7 == local_188 && ((uVar4 ^ 0xffffffff) & 1) == 0) {
              if (lVar11 == 0) {
LAB_010f4ae4:
                local_16c = local_18c & local_16c;
                local_168 = local_168 & (local_18c ^ 1);
              }
            }
            else {
              local_16c = local_16c & (local_164 ^ 1 | (uint)(lVar11 != 0));
              local_168 = local_168 & (local_164 | lVar11 != 0);
              if (uVar7 != 0) {
                lVar6 = *(long *)(param_2 + 0x10);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (*(uint *)(lVar6 + 0x18) <= (uint)(uVar7 - 1)) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                uVar8 = FUN_0213da28(lVar6 + (uVar7 - 1) * 0x10 + 0x20,0);
                if ((uVar8 & 1) != 0) {
                  if ((local_14c & 1) == 0) {
                    local_14c = 0;
                    goto LAB_010f4ae4;
                  }
                  local_14c = 0;
                }
              }
            }
          }
          FUN_012f81e4(&local_e0,lVar11,
                       *(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                      );
          fVar15 = fVar16;
        }
        else {
          FUN_012f81e4(&local_e0,0,
                       *(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                      );
          fVar15 = fVar15 + 1.0;
        }
      }
      else {
        FUN_012f81e4(&local_e0,0,
                     *(undefined8 *)
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                    );
        local_14c = 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != local_158);
    lVar11 = local_198;
    param_1 = local_1a0;
    uVar4 = local_168;
    if ((local_16c & 1) != 0) goto LAB_010f4bcc;
    uVar9 = 2;
  }
  if ((uVar4 & 1) == 0) {
    uVar9 = 1;
  }
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)param_1 = uVar9;
  *(float *)((long)param_1 + 4) = fVar15;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[8] = uStack_c8;
  param_1[7] = uStack_d0;
  param_1[6] = uStack_d8;
  param_1[5] = local_e0;
  param_1[9] = uVar13;
LAB_010f4c20:
  uStack_108 = 0;
  local_110 = 0;
  uStack_118 = 0;
  local_120 = 0;
  if (*(long *)(lVar11 + 0x28) != local_98) {
    local_100 = local_e0;
    uStack_f8 = uStack_d8;
    local_f0 = uStack_d0;
    uStack_e8 = uStack_c8;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


