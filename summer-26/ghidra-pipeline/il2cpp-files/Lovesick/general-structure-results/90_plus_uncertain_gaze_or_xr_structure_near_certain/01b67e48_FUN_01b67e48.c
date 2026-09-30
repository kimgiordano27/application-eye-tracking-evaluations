/*
FUNCTION_NAME: FUN_01b67e48
ENTRY_POINT: 01b67e48
PROGRAM: Lovesick-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;paired_field_refs_with_eye_source;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01b681e8) */
/* WARNING: Removing unreachable block (ram,0x01b682f4) */
/* WARNING: Removing unreachable block (ram,0x01b682fc) */

void FUN_01b67e48(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined4 uVar14;
  ulong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [16];
  long local_48;
  
  puVar2 = StringLiteral_13123;
  if ((DAT_0377e47b & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_OVRPlugin_<>c__DisplayClass526_0_<GetVirtualKeyboardModelAnimationStates>b__0__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f4a88);
    thunk_FUN_00d48444(Method_System_Single_System_IConvertible_ToDateTime__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_<Execute>b__12_0__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ed4b8);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_Add__
                      );
    thunk_FUN_00d48444(System_Tuple<TextWriter,_char[],_int,_int>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13123);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<AudioPlaybackZone_PlaybackZoneData>_get_Current__
                      );
    thunk_FUN_00d48444(Method_System_Numerics_BigInteger_op_Explicit__);
    thunk_FUN_00d48444(Method_System_Collections_Comparer__ctor__);
    DAT_0377e47b = 1;
  }
  local_48 = 0;
  local_68[0] = 0;
  local_70[0] = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lVar6 = *(long *)(*(long *)puVar2 + 0x20);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  pcVar7 = (char *)thunk_FUN_00d32ed4((ulong *)(param_3 + 0x28),*(undefined8 *)(lVar6 + 0x80));
  if ((*pcVar7 == '\0') &&
     (uVar8 = FUN_010c3738(param_3,&local_48,
                           *(undefined8 *)
                            Method_OVRPlugin_<>c__DisplayClass526_0_<GetVirtualKeyboardModelAnimationStates>b__0__
                          ), puVar2 = Method_System_Single_System_IConvertible_ToDateTime__,
     (uVar8 & 1) != 0)) {
    if ((local_48 == 0) || (plVar13 = *(long **)(local_48 + 0x88), plVar13 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar6 = *plVar13;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar8 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_System_Single_System_IConvertible_ToDateTime__) {
          puVar9 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_01b67fd8;
        }
        uVar8 = uVar8 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_00d59724(plVar13,*(long *)Method_System_Single_System_IConvertible_ToDateTime__,0);
LAB_01b67fd8:
    iVar4 = (*(code *)*puVar9)(plVar13,puVar9[1]);
    if (2 < iVar4) {
      FUN_01ba4900(local_68,*(undefined8 *)Method_System_Collections_Comparer__ctor__,0);
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar13 = *(long **)(local_48 + 0x88);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar10 = *plVar13;
      lVar6 = *(long *)puVar2;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar6) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_01b68060;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar13,lVar6,0);
LAB_01b68060:
      iVar4 = (*(code *)*puVar9)(plVar13,puVar9[1]);
      local_d8 = local_d8 & 0xffffffffffffff00;
      FUN_01ba4900(&local_d8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<AudioPlaybackZone_PlaybackZoneData>_get_Current__
                   ,0);
      local_70[0] = (undefined1)local_d8;
      local_d8 = 0;
      uStack_d0 = 0;
      FUN_013421d4(&local_d8,iVar4,3,0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_Add__
                  );
      *(undefined8 *)(param_3 + 0x50) = uStack_d0;
      *(ulong *)(param_3 + 0x48) = local_d8;
      puVar3 = 
      Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_<Execute>b__12_0__;
      if (local_48 != 0) {
        uVar8 = 0;
        do {
          plVar13 = *(long **)(local_48 + 0x88);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar10 = *plVar13;
          lVar6 = *(long *)puVar2;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar6) {
                puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_01b6812c;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar9 = (undefined8 *)FUN_00d59724(plVar13,lVar6,0);
LAB_01b6812c:
          iVar5 = (*(code *)*puVar9)(plVar13,puVar9[1]);
          if ((long)iVar5 <= (long)uVar8) {
            FUN_01ba4904(local_70,0);
            local_d8 = local_d8 & 0xffffffffffffff00;
            FUN_01ba4900(&local_d8,*(undefined8 *)Method_System_Numerics_BigInteger_op_Explicit__,0)
            ;
            local_a0 = 0;
            uStack_98 = 0;
            local_70[0] = (undefined1)local_d8;
            FUN_013421d4(&local_a0,iVar4 * 3 + -6,3,1,*(undefined8 *)PTR_DAT_033ed4b8);
            uStack_b8 = *(undefined8 *)(param_3 + 0x50);
            local_c0 = *(undefined8 *)(param_3 + 0x48);
            *(undefined8 *)(param_3 + 0x60) = uStack_98;
            *(undefined8 *)(param_3 + 0x58) = local_a0;
            uStack_78 = uStack_98;
            uStack_80 = local_a0;
            uStack_a8 = uStack_98;
            uStack_b0 = local_a0;
            local_90 = local_c0;
            uStack_88 = uStack_b8;
            local_60 = FUN_010ec2cc(&local_c0,0,0,*(undefined8 *)PTR_DAT_033f4a88);
            uStack_d0 = 0;
            local_c8 = 0;
            local_d8 = 0;
            FUN_01347274(&local_d8,local_60,
                         *(undefined8 *)System_Tuple<TextWriter,_char[],_int,_int>_TypeInfo);
            *(undefined8 *)(param_3 + 0x38) = local_c8;
            *(undefined8 *)(param_3 + 0x30) = uStack_d0;
            *(ulong *)(param_3 + 0x28) = local_d8;
            FUN_01ba4904(local_70,0);
            FUN_01ba4904(local_68,0);
            return;
          }
          if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          plVar13 = *(long **)(local_48 + 0x88);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar6 = *plVar13;
          uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_01b6819c;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar9 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar3,0);
LAB_01b6819c:
          uVar14 = (*(code *)*puVar9)(plVar13,uVar8 & 0xffffffff,puVar9[1]);
          puVar1 = (undefined4 *)(*(long *)(param_3 + 0x48) + uVar8 * 8);
          *puVar1 = uVar14;
          puVar1[1] = (int)param_2;
          uVar8 = uVar8 + 1;
        } while (local_48 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  return;
}


