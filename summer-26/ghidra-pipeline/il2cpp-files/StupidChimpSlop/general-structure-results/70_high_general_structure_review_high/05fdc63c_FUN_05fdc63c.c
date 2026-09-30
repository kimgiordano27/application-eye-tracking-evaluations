/*
FUNCTION_NAME: FUN_05fdc63c
ENTRY_POINT: 05fdc63c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05fdc63c(undefined4 param_1,undefined4 param_2,undefined8 param_3,long param_4,
                 long *param_5,long param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  
  if ((DAT_06a5e16b & 1) == 0) {
    FUN_02d4dc40(Method_System_IO_Stream_NullStream_EndRead__);
    FUN_02d4dc40(Method_System_IO_Stream_<>c_<FlushAsync>b__37_0__);
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_FtpWebRequest_<CreateConnectionAsync>d__86>__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebOperation_<Run>d__58>__
                );
    FUN_02d4dc40(Method_System_IO_Stream_NullStream_EndWrite__);
    FUN_02d4dc40(Method_System_IO_Stream_<>c_<RunReadWriteTaskWhenReady>b__49_0__);
    FUN_02d4dc40(Method_System_IO_Stream_ReadWriteTask_InvokeAsyncCallback__);
    FUN_02d4dc40(Method_System_IO_Stream_NullStream_BeginRead__);
                    /* try { // try from 05fdc6e0 to 060dc743 has its CatchHandler @ 05fdc6e0
                       catch() { ... } // from try @ 05fdc6e0 with catch @ 05fdc6e0
                       catch() { ... } // from try @ 05fdc760 with catch @ 05fdc6e0
                       catch() { ... } // from try @ 05fdc7fc with catch @ 05fdc6e0 */
    FUN_02d4dc40(Method_System_IO_Stream_NullStream_BeginWrite__);
    FUN_02d4dc40(PTR_DAT_066462d0);
    FUN_02d4dc40(PTR_DAT_06649ce0);
    FUN_02d4dc40(Method_System_IO_Stream_SynchronousAsyncResult_EndRead__);
    FUN_02d4dc40(Method_System_IO_Stream_SynchronousAsyncResult_EndWrite__);
    DAT_06a5e16b = 1;
  }
  if (param_5 != (long *)0x0) {
    lVar11 = *param_5;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
                    /* try { // try from 05fdc744 to 060dc757 has its CatchHandler @ 05fdc7c4 */
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)
             Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_FtpWebRequest_<CreateConnectionAsync>d__86>__
           ) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05fdc77c;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
                    /* try { // try from 05fdc75c to 060dc75f has its CatchHandler @ 05fdc7c0 */
      } while (uVar14 != 0);
    }
                    /* try { // try from 05fdc760 to 060dc7df has its CatchHandler @ 05fdc6e0 */
    puVar8 = (undefined8 *)
             FUN_02d87540(param_5,*(long *)
                                   Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_FtpWebRequest_<CreateConnectionAsync>d__86>__
                          ,0);
LAB_05fdc77c:
    puVar5 = Method_System_IO_Stream_NullStream_EndWrite__;
    puVar4 = Method_System_IO_Stream_<>c_<FlushAsync>b__37_0__;
    iVar6 = (*(code *)*puVar8)(param_5,puVar8[1]);
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebOperation_<Run>d__58>__
    ;
    puVar2 = PTR_DAT_06649ce0;
    if (0 < iVar6) {
      iVar17 = 0;
      do {
        lVar11 = *param_5;
                    /* catch(type#1 @ 06204328) { ... } // from try @ 05fdc75c with catch @ 05fdc7c0
                        */
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    /* catch(type#1 @ 06204328) { ... } // from try @ 05fdc744 with catch @ 05fdc7c4
                        */
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                    /* try { // try from 05fdc7fc to 060dc807 has its CatchHandler @ 05fdc6e0 */
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_05fdc804;
            }
            uVar14 = uVar14 - 1;
                    /* try { // try from 05fdc7e0 to 060dc7e3 has its CatchHandler @ 05fdc7f0 */
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
                    /* catch() { ... } // from try @ 05fdc7e0 with catch @ 05fdc7f0 */
        puVar8 = (undefined8 *)FUN_02d87540(param_5,*(long *)puVar3,0);
                    /* try { // try from 05fdc7f4 to 060dc7fb has its CatchHandler @ 05fdc804 */
LAB_05fdc804:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05fdc7f4 with catch @ 05fdc804
                        */
                    /* try { // try from 05fdc808 to 060dc887 has its CatchHandler @ 05fdc808
                       catch() { ... } // from try @ 05fdc808 with catch @ 05fdc808
                       catch() { ... } // from try @ 05fdc990 with catch @ 05fdc808
                       catch() { ... } // from try @ 05fdca40 with catch @ 05fdc808
                       catch() { ... } // from try @ 05fdca94 with catch @ 05fdc808 */
        plVar9 = (long *)(*(code *)*puVar8)(param_5,iVar17,puVar8[1]);
        if (plVar9 == (long *)0x0) goto LAB_05fdcbd8;
        uVar14 = (**(code **)(*plVar9 + 0x2b8))(plVar9,*(undefined8 *)(*plVar9 + 0x2c0));
        if ((uVar14 & 1) != 0) {
          lVar11 = FUN_05fd9268(plVar9);
          if (lVar11 == 0) goto LAB_05fdcbd8;
          uVar14 = FUN_061b20a8(lVar11,0);
          if (((uVar14 & 1) == 0) && (iVar7 = FUN_05fd924c(plVar9), iVar7 != -1)) {
            uVar10 = FUN_05fd8988(plVar9);
            fVar19 = *(float *)((long)plVar9 + 0x3c);
            lVar11 = plVar9[8];
            uVar20 = *(undefined4 *)((long)plVar9 + 0x44);
            lVar12 = plVar9[9];
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02dabd98(*(long *)puVar2);
            }
                    /* try { // try from 05fdc888 to 060dc89b has its CatchHandler @ 05fdca5c */
            uVar14 = FUN_061b38d0(param_1,param_2,fVar19,(int)lVar11,uVar20,(int)lVar12,uVar10,
                                  param_4,0);
            if ((uVar14 & 1) != 0) {
                    /* try { // try from 05fdc8b4 to 060dc8b7 has its CatchHandler @ 05fdca4c */
              if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
                    /* try { // try from 05fdc8d0 to 060dc8f7 has its CatchHandler @ 05fdca58 */
              uVar14 = FUN_05ee1474(param_4,0,0);
              if ((uVar14 & 1) != 0) {
                lVar11 = FUN_05fd8988(plVar9);
                if ((lVar11 == 0) || (FUN_05ef00fc(lVar11,0), param_4 == 0)) goto LAB_05fdcbd8;
                FUN_05e9f644(param_4,0);
                fVar18 = (float)FUN_05e9d610(param_4,0);
                    /* try { // try from 05fdc90c to 060dc90f has its CatchHandler @ 05fdca48 */
                    /* try { // try from 05fdc910 to 060dc917 has its CatchHandler @ 05fdca54 */
                if (fVar18 < fVar19) goto LAB_05fdc9b4;
              }
              uVar14 = (**(code **)(*plVar9 + 0x418))
                                 (param_1,param_2,plVar9,param_4,*(undefined8 *)(*plVar9 + 0x420));
              if ((uVar14 & 1) != 0) {
                lVar11 = *(long *)puVar4;
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                  lVar11 = *(long *)puVar4;
                }
                    /* try { // try from 05fdc94c to 060dc94f has its CatchHandler @ 05fdca44 */
                lVar11 = **(long **)(lVar11 + 0xb8);
                if (lVar11 == 0) goto LAB_05fdcbd8;
                lVar12 = *(long *)(lVar11 + 0x10);
                lVar15 = *(long *)puVar5;
                    /* try { // try from 05fdc964 to 060dc967 has its CatchHandler @ 05fdca40 */
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar12 == 0) goto LAB_05fdcbd8;
                uVar1 = *(uint *)(lVar11 + 0x18);
                    /* try { // try from 05fdc974 to 060dc98f has its CatchHandler @ 05fdca50 */
                if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                    /* try { // try from 05fdc990 to 060dc9f7 has its CatchHandler @ 05fdc808 */
                  plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar13 = (long)plVar9;
                  thunk_FUN_02dc1ef0(plVar13,plVar9);
                }
                else {
                  FUN_036a5e08(lVar11,plVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          }
        }
LAB_05fdc9b4:
        iVar17 = iVar17 + 1;
      } while (iVar17 != iVar6);
    }
    puVar2 = Method_System_IO_Stream_SynchronousAsyncResult_EndWrite__;
    lVar11 = *(long *)puVar4;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar11);
      lVar11 = *(long *)puVar4;
    }
    lVar12 = *(long *)puVar2;
    lVar11 = **(long **)(lVar11 + 0xb8);
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
                    /* try { // try from 05fdc9f8 to 060dca3f has its CatchHandler @ 05fdca58 */
      lVar12 = *(long *)puVar2;
    }
    puVar8 = *(undefined8 **)(lVar12 + 0xb8);
    lVar15 = puVar8[1];
    if (lVar15 == 0) {
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar10 = *puVar8;
      lVar15 = thunk_FUN_02d8a638(*(undefined8 *)Method_System_IO_Stream_NullStream_EndRead__);
                    /* catch(type#1 @ 06204328) { ... } // from try @ 05fdc964 with catch @ 05fdca40
                       try { // try from 05fdca40 to 060dca77 has its CatchHandler @ 05fdc808 */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 05fdc94c with catch @ 05fdca44
                        */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 05fdc90c with catch @ 05fdca48
                        */
      FUN_046c547c(lVar15,uVar10,
                   *(undefined8 *)Method_System_IO_Stream_SynchronousAsyncResult_EndRead__,0);
                    /* catch(type#1 @ 06204328) { ... } // from try @ 05fdc8b4 with catch @ 05fdca4c
                        */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 05fdc974 with catch @ 05fdca50
                        */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 05fdc910 with catch @ 05fdca54
                        */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 05fdc8d0 with catch @ 05fdca58
                       catch(type#1 @ 06204328) { ... } // from try @ 05fdc9f8 with catch @ 05fdca58
                        */
      plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar9 = lVar15;
                    /* catch(type#1 @ 06204328) { ... } // from try @ 05fdc888 with catch @ 05fdca5c
                        */
      thunk_FUN_02dc1ef0(plVar9,lVar15);
    }
    if (lVar11 != 0) {
                    /* try { // try from 05fdca78 to 060dca7b has its CatchHandler @ 05fdca88 */
      FUN_036a7788(lVar11,lVar15,
                   *(undefined8 *)Method_System_IO_Stream_ReadWriteTask_InvokeAsyncCallback__);
      lVar11 = *(long *)puVar4;
      if (*(int *)(lVar11 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 05fdca78 with catch @ 05fdca88 */
        thunk_FUN_02dabd98();
                    /* try { // try from 05fdca8c to 060dca93 has its CatchHandler @ 05fdca9c */
        lVar11 = *(long *)puVar4;
      }
      puVar2 = Method_System_IO_Stream_NullStream_BeginWrite__;
                    /* try { // try from 05fdca94 to 060dca9f has its CatchHandler @ 05fdc808 */
      if (**(long **)(lVar11 + 0xb8) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05fdca8c with catch @ 05fdca9c
                        */
        iVar6 = *(int *)(**(long **)(lVar11 + 0xb8) + 0x18);
        if (0 < iVar6) {
          iVar17 = 0;
          do {
            lVar11 = *(long *)puVar4;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar11 = *(long *)puVar4;
            }
            if ((**(long **)(lVar11 + 0xb8) == 0) ||
               (uVar10 = FUN_036a5b38(**(long **)(lVar11 + 0xb8),iVar17,*(undefined8 *)puVar2),
               param_6 == 0)) goto LAB_05fdcbd8;
            lVar11 = *(long *)(param_6 + 0x10);
            lVar12 = *(long *)puVar5;
            *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_05fdcbd8;
            uVar1 = *(uint *)(param_6 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(param_6 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
              thunk_FUN_02dc1ef0();
            }
            else {
              FUN_036a5e08(param_6,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            iVar17 = iVar17 + 1;
                    /* try { // try from 05fdcb44 to 060dcbaf has its CatchHandler @ 05fdcb44
                       catch() { ... } // from try @ 05fdcb44 with catch @ 05fdcb44
                       catch() { ... } // from try @ 05fdcbf4 with catch @ 05fdcb44
                       catch() { ... } // from try @ 05fdccac with catch @ 05fdcb44 */
          } while (iVar6 != iVar17);
          lVar11 = *(long *)puVar4;
        }
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar11 = *(long *)puVar4;
        }
        lVar11 = **(long **)(lVar11 + 0xb8);
        if (lVar11 != 0) {
          iVar6 = *(int *)(lVar11 + 0x18);
          *(undefined4 *)(lVar11 + 0x18) = 0;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (0 < iVar6) {
            FUN_05025690(*(undefined8 *)(lVar11 + 0x10),0,iVar6,0);
            return;
          }
                    /* try { // try from 05fdcbb0 to 060dcbc3 has its CatchHandler @ 05fdcc70 */
                    /* try { // try from 05fdcbc8 to 060dcbcb has its CatchHandler @ 05fdcc6c */
          return;
        }
      }
    }
  }
LAB_05fdcbd8:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


