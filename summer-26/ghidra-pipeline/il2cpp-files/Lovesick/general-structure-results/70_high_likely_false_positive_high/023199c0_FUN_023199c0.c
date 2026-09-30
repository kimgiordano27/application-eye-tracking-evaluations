/*
FUNCTION_NAME: FUN_023199c0
ENTRY_POINT: 023199c0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_2
*/


void FUN_023199c0(undefined8 param_1,float param_2,float param_3,long *param_4,long *param_5,
                 long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar10;
  code *pcVar11;
  float *pfVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_9c;
  float local_98;
  long *plVar6;
  undefined *puVar9;
  
  if ((DAT_03781c31 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033eb3c0);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_n_s32__);
    thunk_FUN_00d48444(Method_System_Nullable<GeneralNameType>_get_HasValue__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_StyleDataRef<InheritedData>_Equals__);
    thunk_FUN_00d48444(Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ece78);
    DAT_03781c31 = 1;
  }
  puVar9 = PTR_DAT_033ece78;
  if (param_4 == (long *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar9 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Module__;
  }
  else {
    if (param_6 != 0) {
      fVar18 = (float)FUN_02304c3c(param_1,0);
      fVar22 = param_2;
      fVar21 = param_3;
      FUN_0231a0fc();
      fVar19 = (float)FUN_0231a21c();
      if (param_5 == (long *)0x0) {
        lVar10 = *param_4;
        uVar14 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_n_s32__) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_02319b58;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_00d59724(param_4,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_n_s32__,
                              0);
LAB_02319b58:
        pcVar11 = (code *)*puVar5;
        uVar7 = puVar5[1];
        plVar6 = param_4;
      }
      else {
        lVar10 = *param_5;
        uVar14 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_033eb3c0) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_02319b40;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(param_5,*(long *)PTR_DAT_033eb3c0,0);
LAB_02319b40:
        pcVar11 = (code *)*puVar5;
        uVar7 = puVar5[1];
        plVar6 = param_5;
      }
      iVar3 = (*pcVar11)(plVar6,uVar7);
      lVar10 = *(long *)puVar9;
      *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + 1;
      uVar14 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 200));
      if ((uVar14 & 1) == 0) {
        *(undefined4 *)(param_6 + 0x18) = 0;
      }
      else {
        iVar17 = *(int *)(param_6 + 0x18);
        *(undefined4 *)(param_6 + 0x18) = 0;
        if (0 < iVar17) {
          FUN_0179519c(*(undefined8 *)(param_6 + 0x10),0,iVar17,0);
        }
      }
      if (DAT_0377518c == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_0377518c = '\x01';
      }
      puVar9 = System_Threading_Timer_TimerComparer_TypeInfo;
      fVar25 = param_2 * fVar21 - param_3 * fVar22;
      fVar21 = param_3 * fVar19 - fVar18 * fVar21;
      fVar22 = fVar18 * fVar22 - param_2 * fVar19;
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar1 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
      fVar19 = DAT_028aa038;
      fVar20 = SQRT(fVar22 * fVar22 + fVar25 * fVar25 + fVar21 * fVar21);
      if (fVar20 <= DAT_028aa038) {
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        pfVar12 = *(float **)(*(long *)puVar1 + 0xb8);
        local_98 = *pfVar12;
        local_9c = pfVar12[1];
        fVar20 = pfVar12[2];
      }
      else {
        local_98 = fVar25 / fVar20;
        local_9c = fVar21 / fVar20;
        fVar20 = fVar22 / fVar20;
      }
      uVar14 = (ulong)(uint)fVar18;
      if (DAT_0377518c == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_0377518c = '\x01';
      }
      fVar23 = param_3 * fVar21 - param_2 * fVar22;
      fVar24 = fVar18 * fVar22 - param_3 * fVar25;
      fVar22 = param_2 * fVar25 - fVar18 * fVar21;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar15 = (ulong)(uint)(fVar22 * fVar22);
      fVar21 = SQRT(fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24);
      if (fVar21 <= fVar19) {
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        pfVar12 = *(float **)(*(long *)puVar1 + 0xb8);
        fVar23 = *pfVar12;
        fVar24 = pfVar12[1];
        fVar22 = pfVar12[2];
      }
      else {
        fVar23 = fVar23 / fVar21;
        fVar24 = fVar24 / fVar21;
        fVar22 = fVar22 / fVar21;
      }
      puVar2 = Method_UnityEngine_UIElements_StyleDataRef<InheritedData>_Equals__;
      puVar1 = Method_System_Nullable<GeneralNameType>_get_HasValue__;
      puVar9 = Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
      if (param_5 == (long *)0x0) {
        if (0 < iVar3) {
          iVar17 = 0;
          do {
            fVar21 = (float)uVar15;
            lVar10 = *param_4;
            uVar15 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_02319fb0;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar5 = (undefined8 *)FUN_00d59724(param_4,*(long *)puVar1,0);
LAB_02319fb0:
            fVar18 = (float)(*(code *)*puVar5)(param_4,iVar17,puVar5[1]);
            lVar10 = *param_4;
            uVar15 = (ulong)*(ushort *)(lVar10 + 0x12a);
            fVar19 = fVar20 * (float)uVar14;
            fVar21 = fVar19 + local_98 * fVar18 + local_9c * fVar21;
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_0231a020;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar5 = (undefined8 *)FUN_00d59724(param_4,*(long *)puVar1,0);
LAB_0231a020:
            fVar18 = (float)(*(code *)*puVar5)(param_4,iVar17,puVar5[1]);
            uVar15 = (ulong)(uint)(fVar22 * (float)uVar14 + fVar23 * fVar18 + fVar24 * fVar19);
            FUN_00bbed00(fVar21,param_6,*(undefined8 *)puVar9);
            iVar17 = iVar17 + 1;
          } while (iVar17 != iVar3);
        }
      }
      else if (0 < iVar3) {
        iVar17 = 0;
        do {
          fVar21 = (float)uVar15;
          lVar13 = *param_5;
          lVar10 = *(long *)puVar2;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar10) {
                puVar5 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_02319de8;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar5 = (undefined8 *)FUN_00d59724(param_5,lVar10,0);
LAB_02319de8:
          uVar4 = (*(code *)*puVar5)(param_5,iVar17,puVar5[1]);
          lVar10 = *param_4;
          uVar15 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_02319e48;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar5 = (undefined8 *)FUN_00d59724(param_4,*(long *)puVar1,0);
LAB_02319e48:
          fVar18 = (float)(*(code *)*puVar5)(param_4,uVar4,puVar5[1]);
          lVar13 = *param_5;
          lVar10 = *(long *)puVar2;
          fVar21 = local_9c * fVar21;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
          fVar19 = local_98 * fVar18 + fVar21;
          fVar18 = (float)uVar14;
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar10) {
                puVar5 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_02319eb4;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar5 = (undefined8 *)FUN_00d59724(param_5,lVar10,0);
LAB_02319eb4:
          uVar4 = (*(code *)*puVar5)(param_5,iVar17,puVar5[1]);
          lVar10 = *param_4;
          uVar15 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_02319f18;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar5 = (undefined8 *)FUN_00d59724(param_4,*(long *)puVar1,0);
LAB_02319f18:
          fVar25 = (float)(*(code *)*puVar5)(param_4,uVar4,puVar5[1]);
          uVar15 = (ulong)(uint)(fVar22 * (float)uVar14 + fVar23 * fVar25 + fVar24 * fVar21);
          FUN_00bbed00(fVar20 * fVar18 + fVar19,param_6,*(undefined8 *)puVar9);
          iVar17 = iVar17 + 1;
        } while (iVar17 != iVar3);
      }
      return;
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar9 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_ManagedWebSocket_<SendCloseFrameAsync>d__69>__
    ;
  }
  uVar8 = thunk_FUN_00d48444(puVar9);
  FUN_016ec5b8(uVar7,uVar8,0);
  uVar8 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<Button>_GetEnumerator__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar7,uVar8);
}


