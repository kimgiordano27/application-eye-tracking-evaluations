/*
FUNCTION_NAME: FUN_012b2c50
ENTRY_POINT: 012b2c50
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_file_logging_hits_5;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_012b2c50(undefined8 param_1,long *param_2,void *param_3,long param_4)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *__dest;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  ulong __n;
  undefined1 *__s;
  undefined1 auStack_c0 [8];
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  char local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  
                    /* try { // try from 012b2c58 to 013b2ca7 has its CatchHandler @ 012b2e54 */
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if ((DAT_037765b5 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4901);
                    /* try { // try from 012b2ca8 to 013b2d7f has its CatchHandler @ 012b2a44 */
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                      );
    thunk_FUN_00d48444(StringLiteral_9688);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(UnityEngine_Rendering_LODParameters_TypeInfo);
    thunk_FUN_00d48444(Method_System_Tuple<TextWriter,_string>__ctor__);
    thunk_FUN_00d48444(StringLiteral_12066);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
                      );
    DAT_037765b5 = 1;
  }
  lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  if (*(int *)(lVar6 + 0x28) < 0) {
    iVar5 = thunk_FUN_00d42afc();
    uVar12 = iVar5 - 0x10;
  }
  else {
    uVar12 = 8;
  }
  __n = (ulong)uVar12;
  uVar14 = __n + 0xf & 0x1fffffff0;
  __dest = auStack_c0 + -uVar14;
  __s = __dest + -uVar14;
  local_78 = 0;
  local_70 = 0;
  memset(__s,0,__n);
  puVar3 = StringLiteral_9688;
  if (param_2 == (long *)0x0) goto LAB_012b32bc;
  lVar6 = *param_2;
  uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_9688) {
        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar15 + 0x10) * 0x10 + 0x138);
        goto LAB_012b2dcc;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar7 = (undefined8 *)FUN_00d59724(param_2,*(long *)StringLiteral_9688,0x10);
LAB_012b2dcc:
  puVar2 = Method_System_Tuple<TextWriter,_string>__ctor__;
  cVar4 = (*(code *)*puVar7)(param_2,&local_70,puVar7[1]);
  lVar13 = *param_2;
  lVar6 = *(long *)puVar3;
  uVar1 = *(ushort *)(lVar13 + 0x12a);
  uVar14 = (ulong)uVar1;
  if (cVar4 == '\x03') {
    if (uVar1 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar6) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0x1f) * 0x10 + 0x138);
          goto LAB_012b2e78;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(param_2,lVar6,0x1f);
LAB_012b2e78:
    uVar14 = (*(code *)*puVar7)(param_2,&local_78,puVar7[1]);
    if ((uVar14 & 1) == 0) {
      lVar6 = *param_2;
      uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar15 + 8) * 0x10 + 0x138);
            goto LAB_012b315c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar3,8);
LAB_012b315c:
      lVar6 = (*(code *)*puVar7)(param_2,puVar7[1]);
      if ((lVar6 == 0) ||
         (lVar6 = FUN_01c25128(lVar6,0), puVar3 = UnityEngine_Rendering_LODParameters_TypeInfo,
         lVar6 == 0)) goto LAB_012b32bc;
      lVar13 = FUN_01c254c8(lVar6,0);
      lVar6 = local_70;
      local_90 = *(undefined8 *)StringLiteral_4901;
      local_80 = 3;
      uStack_88 = 0xffffffffffffffff;
      uVar10 = FUN_017a7f78(&local_90,0);
      uVar10 = FUN_0160073c(*(undefined8 *)puVar3,lVar6,*(undefined8 *)puVar2,uVar10,0);
      if (lVar13 == 0) goto LAB_012b32bc;
      FUN_01c25764(lVar13,uVar10,0);
    }
    puVar3 = 
    Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
    ;
    uVar10 = **(undefined8 **)(*(long *)(param_4 + 0x20) + 0xc0);
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_01780344(uVar10,0);
    uVar10 = local_78;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    uVar10 = FUN_017a63ec(uVar11,uVar10,0);
    lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c(lVar6);
    }
    __dest = (undefined1 *)FUN_00da5060(uVar10,lVar6,__dest);
LAB_012b3284:
    memcpy(param_3,__dest,__n);
    if (*(long *)(lVar8 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (uVar1 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == lVar6) {
        puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 8) * 0x10 + 0x138);
        goto LAB_012b2edc;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar7 = (undefined8 *)FUN_00d59724(param_2,lVar6,8);
LAB_012b2edc:
  lVar6 = (*(code *)*puVar7)(param_2,puVar7[1]);
  if (lVar6 != 0) {
    local_b0 = lVar8;
    lVar8 = FUN_01c25128(lVar6,0);
    puVar2 = PTR_DAT_033ea8a0;
    if (lVar8 != 0) {
      lVar8 = FUN_01c254c8(lVar8,0);
      plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,6);
      puVar2 = 
      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__;
      if (plVar9 == (long *)0x0) goto LAB_012b32bc;
      if ((*(long *)
            Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
           != 0) &&
         (lVar6 = thunk_FUN_00d6225c(*(long *)
                                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
                                     ,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0)) {
LAB_012b32c4:
        uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar10,0);
      }
      if ((int)plVar9[3] == 0) goto LAB_012b32c0;
      plVar9[4] = *(long *)puVar2;
      local_80 = 3;
      local_90 = *(undefined8 *)StringLiteral_4901;
      uStack_88 = 0xffffffffffffffff;
      local_b8 = lVar8;
      lVar8 = FUN_017a7f78(&local_90,0);
      if ((lVar8 != 0) &&
         (lVar6 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0))
      goto LAB_012b32c4;
      puVar2 = StringLiteral_12066;
      uVar12 = *(uint *)(plVar9 + 3);
      if (uVar12 < 2) {
LAB_012b32c0:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar9[5] = lVar8;
      lVar8 = *(long *)puVar2;
      if (lVar8 != 0) {
        lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
        if (lVar8 == 0) goto LAB_012b32c4;
        uVar12 = *(uint *)(plVar9 + 3);
      }
      lVar8 = local_70;
      if (uVar12 < 3) goto LAB_012b32c0;
      plVar9[6] = *(long *)puVar2;
      if (local_70 != 0) {
        lVar6 = thunk_FUN_00d6225c(local_70,*(undefined8 *)(*plVar9 + 0x40));
        if (lVar6 == 0) goto LAB_012b32c4;
        uVar12 = *(uint *)(plVar9 + 3);
      }
      if (uVar12 < 4) goto LAB_012b32c0;
      plVar9[7] = lVar8;
      puVar2 = Method_System_Tuple<TextWriter,_string>__ctor__;
      if (*(long *)Method_System_Tuple<TextWriter,_string>__ctor__ != 0) {
        lVar8 = thunk_FUN_00d6225c(*(long *)Method_System_Tuple<TextWriter,_string>__ctor__,
                                   *(undefined8 *)(*plVar9 + 0x40));
        if (lVar8 == 0) goto LAB_012b32c4;
        uVar12 = *(uint *)(plVar9 + 3);
      }
      if (uVar12 < 5) goto LAB_012b32c0;
      plVar9[8] = *(long *)puVar2;
      local_a8 = *(undefined8 *)StringLiteral_4901;
      uStack_a0 = 0xffffffffffffffff;
      local_98 = cVar4;
      lVar8 = FUN_017a7f78(&local_a8,0);
      if ((lVar8 != 0) &&
         (lVar6 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0))
      goto LAB_012b32c4;
      lVar6 = local_b8;
      if (*(uint *)(plVar9 + 3) < 6) goto LAB_012b32c0;
      plVar9[9] = lVar8;
      uVar10 = FUN_01600844(plVar9,0);
      if (lVar6 == 0) goto LAB_012b32bc;
      FUN_01c25764(lVar6,uVar10,0);
      lVar8 = local_b0;
      lVar6 = *param_2;
      uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar15 + 0x25) * 0x10 + 0x138);
            goto LAB_012b3114;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar3,0x25);
LAB_012b3114:
      (*(code *)*puVar7)(param_2,puVar7[1]);
      memset(__s,0,__n);
      memcpy(__dest,__s,__n);
      goto LAB_012b3284;
    }
  }
LAB_012b32bc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


