/*
FUNCTION_NAME: FUN_05eafaf8
ENTRY_POINT: 05eafaf8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


void FUN_05eafaf8(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined *puVar11;
  
  puVar4 = Method_System_Net_WebReadStream_EndRead__;
  puVar11 = Method_System_Net_WebReadStream_BeginRead__;
  if ((DAT_06bc4395 & 1) == 0) {
    FUN_02f08768(Method_System_Net_WebReadStream_Flush__);
    FUN_02f08768(Method_System_Net_WebReadStream_Read__);
    FUN_02f08768(Method_System_Net_WebReadStream_EndRead__);
    FUN_02f08768(Method_System_Net_WebReadStream_BeginRead__);
    FUN_02f08768(Method_System_Net_WebReadStream_Seek__);
    FUN_02f08768(Method_System_Net_WebReadStream_Write__);
    DAT_06bc4395 = 1;
  }
  uVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar11);
  FUN_048ca338(uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  FUN_05116b38(param_1,0);
  puVar11 = Method_System_Net_WebReadStream_Seek__;
  if (param_3 != 0) {
    if (*(int *)(param_2 + 8) != 0) {
      *(int *)(param_1 + 0x20) = *(int *)(param_2 + 8);
      uVar5 = FUN_02f0880c(*(undefined8 *)puVar11,param_3);
      *(undefined8 *)(param_1 + 0x10) = uVar5;
      puVar4 = Method_System_Net_WebReadStream_Read__;
      puVar11 = Method_System_Net_WebReadStream_Flush__;
      if (0 < (int)param_3) {
        uVar14 = 0;
        iVar3 = *(int *)(param_1 + 0x20);
        do {
          plVar1 = (long *)(param_2 + (ulong)uVar14 * 0x10);
          if ((int)plVar1[1] != iVar3) {
            thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
            uVar5 = thunk_FUN_02f45270();
            puVar11 = Method_System_Net_WebRequest_Abort__;
            goto LAB_05eafd9c;
          }
          plVar15 = *(long **)(param_1 + 0x10);
          lVar6 = FUN_02f0880c(*(undefined8 *)Method_System_Net_WebReadStream_Write__);
          if (plVar15 == (long *)0x0) {
LAB_05eafd58:
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_02f45174(lVar6,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0)) {
LAB_05eafddc:
            uVar5 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar5,0);
          }
          if (*(uint *)(plVar15 + 3) <= uVar14) {
LAB_05eafd5c:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          iVar3 = *(int *)(param_1 + 0x20);
          plVar15[(ulong)uVar14 + 4] = lVar6;
          if (0 < iVar3) {
            lVar6 = 0;
            lVar7 = 0;
            do {
              if (*(long *)(*plVar1 + lVar7) == 0) {
                thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
                uVar5 = thunk_FUN_02f45270();
                puVar11 = Method_System_Net_WebReadStream_get_Position__;
                goto LAB_05eafd9c;
              }
              if (*(long *)(param_1 + 0x18) == 0) goto LAB_05eafd58;
              uVar8 = FUN_048cae68(*(long *)(param_1 + 0x18),*(long *)(*plVar1 + lVar7),
                                   *(undefined8 *)puVar4);
              if ((uVar8 & 1) != 0) {
                thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
                uVar5 = thunk_FUN_02f45270();
                puVar11 = Method_System_Net_WebReadStream_get_Length__;
                goto LAB_05eafd9c;
              }
              lVar13 = *(long *)(param_1 + 0x10);
              if (lVar13 == 0) goto LAB_05eafd58;
              if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_05eafd5c;
              puVar2 = (undefined8 *)(*plVar1 + lVar7);
              plVar15 = *(long **)(lVar13 + (ulong)uVar14 * 8 + 0x20);
              uStack_88 = puVar2[1];
              local_90 = *puVar2;
              uStack_78 = puVar2[3];
              uStack_80 = puVar2[2];
              local_70 = puVar2[4];
              lVar13 = FUN_05eb4564(&local_90,0);
              if (plVar15 == (long *)0x0) goto LAB_05eafd58;
              if ((lVar13 != 0) &&
                 (lVar9 = thunk_FUN_02f45174(lVar13,*(undefined8 *)(*plVar15 + 0x40)), lVar9 == 0))
              goto LAB_05eafddc;
              if (*(uint *)(plVar15 + 3) <= (uint)lVar6) goto LAB_05eafd5c;
              plVar15[lVar6 + 4] = lVar13;
              if (*(long *)(param_1 + 0x18) == 0) goto LAB_05eafd58;
              FUN_048cac74(*(long *)(param_1 + 0x18),*(undefined8 *)(*plVar1 + lVar7),uVar14,
                           *(undefined8 *)puVar11);
              iVar3 = *(int *)(param_1 + 0x20);
              lVar6 = lVar6 + 1;
              lVar7 = lVar7 + 0x28;
            } while ((int)lVar6 < iVar3);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != param_3);
      }
      return;
    }
  }
  thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
  uVar5 = thunk_FUN_02f45270();
  puVar11 = Method_System_Net_WebRequest_BeginGetResponse__;
LAB_05eafd9c:
  uVar10 = thunk_FUN_02f6ef30(puVar11);
  uVar12 = thunk_FUN_02f6ef30(Method_System_Net_WebReadStream_set_Position__);
  FUN_0504ee88(uVar5,uVar10,uVar12,0);
  uVar10 = thunk_FUN_02f6ef30(Method_System_Net_WebRequest_<GetResponseAsync>b__79_0__);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar5,uVar10);
}


