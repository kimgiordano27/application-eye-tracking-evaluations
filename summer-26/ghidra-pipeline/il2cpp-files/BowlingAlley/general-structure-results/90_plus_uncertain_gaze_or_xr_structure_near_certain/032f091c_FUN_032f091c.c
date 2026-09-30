/*
FUNCTION_NAME: FUN_032f091c
ENTRY_POINT: 032f091c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 * FUN_032f091c(undefined8 *param_1,ulong param_2,byte param_3)

{
  byte bVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  ushort uVar11;
  undefined2 uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined8 *local_90;
  void *local_88;
  void *local_80;
  undefined8 local_78;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  void *local_58;
  
  uVar10 = (uint)param_2;
  bVar1 = uVar10 < 2 & param_3;
  puVar6 = (undefined8 *)FUN_032f0cc4(param_1,param_2,bVar1);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_03296828(auStack_70,Method_OVRTask_FromRequest<OVRResult<OVRPlugin_Result>>__);
    puVar6 = (undefined8 *)FUN_032f0cc4(param_1,param_2 & 0xffffffff,bVar1);
    puVar3 = Method_OVRSpaceQuery_ForComponentThrow__;
    if (puVar6 == (undefined8 *)0x0) {
      lVar13 = *(long *)(Method_OVRSpaceQuery_ForComponentThrow__ + 0xa0);
      FUN_032dcf04(lVar13);
      iVar15 = uVar10 - 1;
      local_88 = (void *)0x0;
      local_80 = (void *)0x0;
      local_78 = 0;
      if ((uVar10 == 0 || iVar15 == 0) && ((param_3 & 1) == 0)) {
        FUN_032f0d2c(param_1,&local_88);
      }
      lVar14 = (ulong)*(ushort *)(lVar13 + 0x12a) +
               ((ulong)*(ushort *)(*(long *)(puVar3 + 0x180) + 0x120) +
                (ulong)*(ushort *)(*(long *)(puVar3 + 0x178) + 0x120) +
                (ulong)*(ushort *)(*(long *)(puVar3 + 0x188) + 0x120) +
                (ulong)*(ushort *)(*(long *)(puVar3 + 400) + 0x120) +
               (ulong)*(ushort *)(*(long *)(puVar3 + 0x198) + 0x120)) *
               ((long)local_80 - (long)local_88 >> 3);
      local_90 = (undefined8 *)FUN_032fb70c(1,lVar14 * 0x10 + 0x138);
      local_90[0xf] = local_90;
      *local_90 = *param_1;
      local_90[3] = param_1[3];
      local_68 = 0;
      local_60 = 0;
      local_58 = (void *)0x0;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_68,(char *)param_1[2]);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_68,"[");
      if (1 < uVar10) {
        do {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_68,",");
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      if (bVar1 != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_68,"*");
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_68,"]");
      pvVar2 = (void *)((ulong)&local_68 | 1);
      if ((local_68 & 1) != 0) {
        pvVar2 = local_58;
      }
      uVar7 = FUN_03300ea8(pvVar2);
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
      puVar4 = local_90;
      local_90[2] = uVar7;
      uVar7 = *(undefined8 *)(puVar3 + 0xa0);
      *(undefined4 *)(local_90 + 0x23) = 0x2101;
      *(char *)((long)local_90 + 0x132) = (char)param_2;
      local_90[0xb] = uVar7;
      uVar5 = FUN_032dd228(lVar13);
      *(undefined4 *)(puVar4 + 0x1f) = uVar5;
      *(undefined4 *)((long)puVar4 + 0xfc) = 8;
      *(short *)((long)puVar4 + 0x12a) = (short)lVar14;
      FUN_032dd11c(param_1);
      uVar5 = FUN_032df4a4(param_1);
      puVar6 = param_1 + 4;
      *(undefined4 *)((long)puVar4 + 0x104) = uVar5;
      *(undefined4 *)((long)puVar4 + 0x114) = 0xffffffff;
      *(undefined4 *)(puVar4 + 0x21) = 0xffffffff;
      uVar8 = FUN_0331f780(puVar6);
      if ((uVar8 & 1) == 0) {
        uVar11 = *(ushort *)((long)param_1 + 0x135) & 0x20 | 0x100;
      }
      else {
        uVar11 = 0x120;
      }
      *(ushort *)((long)puVar4 + 0x135) = uVar11 | *(ushort *)((long)puVar4 + 0x135) & 0xfedf;
      puVar4[8] = param_1;
      FUN_032efb9c(puVar4);
      if (uVar10 < 2 && (param_3 & 1) == 0) {
        *(undefined1 *)((long)local_90 + 0x2a) = 0x1d;
        uVar12 = 5;
        local_90[4] = puVar6;
      }
      else {
        plVar9 = (long *)FUN_032fb70c(1,0x20);
        *(undefined1 *)((long)local_90 + 0x2a) = 0x14;
        local_90[4] = plVar9;
        *plVar9 = (long)puVar6;
        *(char *)(plVar9 + 1) = (char)param_2;
        uVar12 = 0;
      }
      puVar6 = local_90;
      *(undefined2 *)((long)local_90 + 300) = uVar12;
      local_90[7] = local_90[5];
      local_90[6] = local_90[4];
      *(uint *)(local_90 + 7) = *(uint *)(local_90 + 7) | 0x20000000;
      uVar7 = FUN_032e193c(local_90 + 4);
      puVar6[0xe] = uVar7;
      if (uVar10 < 2 && (param_3 & 1) == 0) {
        local_68 = (ulong)local_68._4_4_ << 0x20;
        local_60 = puVar6[8];
        FUN_032f1484(&DAT_076ec138,&local_68,&local_90);
      }
      else {
        local_60 = puVar6[8];
        local_68 = (ulong)local_68._4_4_ << 0x20;
        local_58 = (void *)CONCAT44(local_58._4_4_,(uint)*(byte *)((long)puVar6 + 0x132));
        FUN_032f13ec(&DAT_076ec1a8,&local_68,&local_90);
      }
      puVar6 = local_90;
      if (local_88 != (void *)0x0) {
        local_80 = local_88;
        operator_delete(local_88);
      }
    }
    FUN_03296ccc(auStack_70);
  }
  return puVar6;
}


