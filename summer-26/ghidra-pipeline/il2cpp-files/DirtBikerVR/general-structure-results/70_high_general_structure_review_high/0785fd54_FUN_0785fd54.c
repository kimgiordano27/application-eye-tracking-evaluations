/*
FUNCTION_NAME: FUN_0785fd54
ENTRY_POINT: 0785fd54
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_20;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0785fd54(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  undefined8 *puVar18;
  long *plVar19;
  char cVar20;
  long local_d0;
  undefined8 *puStack_c8;
  long local_c0;
  long local_b8;
  char *local_b0;
  undefined8 *local_a8;
  undefined4 local_98;
  long local_90;
  undefined8 uStack_88;
  long local_80;
  char local_6c [4];
  undefined8 local_68;
  
  if ((DAT_0898760a & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08488d10);
    FUN_03a8a718(System_Func<Light,_Camera,_Vector3,_float>_TypeInfo);
    FUN_03a8a718(System_Func<string,_AsyncCallback,_object,_IAsyncResult>_TypeInfo);
    FUN_03a8a718(System_Func<string,_int,_RTHandleSystem,_RTHandle>_TypeInfo);
    FUN_03a8a718(System_Func<StyleValues,_StyleValues,_float,_StyleValues>_TypeInfo);
    FUN_03a8a718(System_Func<HDCamera,_HDAdditionalLightData,_Light,_uint>_TypeInfo);
    FUN_03a8a718(
                System_Func<UpdateBackfillTicketRequest,_string,_Configuration,_Task<Response>>_TypeInfo
                );
    FUN_03a8a718(
                System_Func<Vector3,_Vector3,_ValueTuple<EventModifiers,_Nullable<int>>,_EventBase>_TypeInfo
                );
    FUN_03a8a718(
                System_Func<Vector3,_Vector3,_ValueTuple<EventModifiers,_Vector2>,_EventBase>_TypeInfo
                );
    FUN_03a8a718(
                System_Func<Vector3,_Vector3,_ValueTuple<Touch,_int,_Nullable<int>>,_EventBase>_TypeInfo
                );
    FUN_03a8a718(System_Func<Stream,_XmlReaderSettings,_XmlParserContext,_XmlReader>_TypeInfo);
    FUN_03a8a718(
                System_Func<Vector3,_Vector3,_ValueTuple<int,_int,_EventModifiers,_Nullable<int>>,_EventBase>_TypeInfo
                );
    FUN_03a8a718(System_Func<Vector3,_Vector3,_Event,_EventBase>_TypeInfo);
    FUN_03a8a718(PTR_DAT_084add48);
    FUN_03a8a718(PTR_DAT_0848d278);
    FUN_03a8a718(PTR_DAT_084add50);
    DAT_0898760a = 1;
  }
  local_68 = *(undefined8 *)(param_1 + 0x40);
  local_b0 = local_6c;
  local_b8 = 0;
  local_a8 = &local_68;
  local_6c[0] = '\0';
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_98 = 0;
  FUN_067b43ac(local_68,local_6c,0);
  puVar9 = System_Func<Vector3,_Vector3,_Event,_EventBase>_TypeInfo;
  puVar8 = System_Func<UpdateBackfillTicketRequest,_string,_Configuration,_Task<Response>>_TypeInfo;
  puVar7 = System_Func<string,_int,_RTHandleSystem,_RTHandle>_TypeInfo;
  puVar6 = System_Func<Stream,_XmlReaderSettings,_XmlParserContext,_XmlReader>_TypeInfo;
  puVar5 = System_Func<Light,_Camera,_Vector3,_float>_TypeInfo;
  puVar4 = System_Func<HDCamera,_HDAdditionalLightData,_Light,_uint>_TypeInfo;
  puVar3 = PTR_DAT_08488d10;
  lVar13 = *(long *)(param_1 + 0x58);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  iVar1 = *(int *)(lVar13 + 0x18);
  *(undefined4 *)(lVar13 + 0x18) = 0;
  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
  if (0 < iVar1) {
    Newtonsoft_Json_Schema_ValidationEventArgs__get_Path(*(undefined8 *)(lVar13 + 0x10),0,iVar1,0);
  }
  while( true ) {
    lVar13 = *(long *)(param_1 + 0x48);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(int *)(lVar13 + 0x30) < 1) break;
    lVar13 = FUN_05078cc4(lVar13,*(undefined8 *)puVar9);
    if (lVar13 == 0) {
      puVar18 = (undefined8 *)0x0;
      cVar20 = '\0';
    }
    else {
      local_d0 = 0;
      puStack_c8 = (undefined8 *)0x0;
      FUN_05296b3c(&local_d0,*(undefined8 *)(lVar13 + 0x18),*(undefined8 *)PTR_DAT_0848d278);
      puVar18 = puStack_c8;
      cVar20 = (char)local_d0;
    }
    plVar19 = *(long **)(param_1 + 0x38);
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar13 = *plVar19;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0785ff88;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4(plVar19,*(long *)puVar4,0);
LAB_0785ff88:
    uVar11 = (*(code *)*puVar10)(plVar19,puVar10[1]);
    if (cVar20 == '\0') break;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar15 = FUN_067333e8(puVar18,uVar11,0);
    if ((uVar15 & 1) == 0) break;
    if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar13 = FUN_050797c0(*(long *)(param_1 + 0x48),
                          *(undefined8 *)
                           System_Func<Vector3,_Vector3,_ValueTuple<Touch,_int,_Nullable<int>>,_EventBase>_TypeInfo
                         );
    lVar12 = *(long *)(param_1 + 0x58);
    if (lVar12 == 0) {
LAB_07860158:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar14 = *(long *)(lVar12 + 0x10);
    lVar16 = *(long *)puVar8;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_07860158;
    uVar2 = *(uint *)(lVar12 + 0x18);
    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
      plVar19 = (long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
      *plVar19 = lVar13;
      thunk_FUN_03afed3c(plVar19,lVar13);
    }
    else {
      FUN_04de85b0(lVar12,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
      ;
    }
    if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_050795d4(*(long *)(param_1 + 0x48),lVar13,*(undefined8 *)puVar6);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05f4bfbc(*(long *)(param_1 + 0x50),*(undefined8 *)(lVar13 + 0x20),*(undefined8 *)puVar5);
  }
  if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_04de90b8(&local_d0,*(long *)(param_1 + 0x58),
               *(undefined8 *)
                System_Func<Vector3,_Vector3,_ValueTuple<EventModifiers,_Vector2>,_EventBase>_TypeInfo
              );
  uStack_88 = puStack_c8;
  local_90 = local_d0;
  local_80 = local_c0;
  local_d0 = 0;
  puStack_c8 = &local_90;
  while( true ) {
    uVar15 = FUN_061c1964(&local_90,*(undefined8 *)puVar7);
    if ((uVar15 & 1) == 0) {
      FUN_061c1960(puStack_c8,
                   *(undefined8 *)System_Func<string,_AsyncCallback,_object,_IAsyncResult>_TypeInfo)
      ;
      if (local_d0 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9b8();
      }
      if (*local_b0 != '\0') {
        thunk_FUN_03a98474(*local_a8,0);
      }
      if (local_b8 == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9b8();
    }
    if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar13 = *(long *)(local_80 + 0x10);
    if (lVar13 == 0) break;
    (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


