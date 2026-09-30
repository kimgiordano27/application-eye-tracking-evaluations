/*
FUNCTION_NAME: Unity.VisualScripting.Generated.Aot.AotStubs$$Unity_VRTemplate_RayAttachModifier_op_Inequality
ENTRY_POINT: 032f0940
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 *
Unity_VisualScripting_Generated_Aot_AotStubs__Unity_VRTemplate_RayAttachModifier_op_Inequality
          (undefined8 *param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  ushort uVar9;
  undefined2 uVar10;
  uint uVar11;
  long lVar12;
  uint unaff_w23;
  long lVar13;
  int iVar14;
  void *in_stack_00000008;
  void *in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  void *in_stack_00000038;
  
  puVar5 = (undefined8 *)FUN_032f0cc4(param_1,param_2,unaff_w23);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_03296828(&stack0x00000020,Method_OVRTask_FromRequest<OVRResult<OVRPlugin_Result>>__);
    puVar5 = (undefined8 *)FUN_032f0cc4(param_1,param_2 & 0xffffffff,unaff_w23);
    puVar3 = Method_OVRSpaceQuery_ForComponentThrow__;
    if (puVar5 == (undefined8 *)0x0) {
      lVar12 = *(long *)(Method_OVRSpaceQuery_ForComponentThrow__ + 0xa0);
      FUN_032dcf04(lVar12);
      uVar11 = (uint)param_2;
      iVar14 = uVar11 - 1;
      in_stack_00000008 = (void *)0x0;
      in_stack_00000010 = (void *)0x0;
      in_stack_00000018 = 0;
      if ((uVar11 == 0 || iVar14 == 0) && ((param_3 & 1) == 0)) {
        FUN_032f0d2c(param_1,&stack0x00000008);
      }
      lVar13 = (ulong)*(ushort *)(lVar12 + 0x12a) +
               ((ulong)*(ushort *)(*(long *)(puVar3 + 0x180) + 0x120) +
                (ulong)*(ushort *)(*(long *)(puVar3 + 0x178) + 0x120) +
                (ulong)*(ushort *)(*(long *)(puVar3 + 0x188) + 0x120) +
                (ulong)*(ushort *)(*(long *)(puVar3 + 400) + 0x120) +
               (ulong)*(ushort *)(*(long *)(puVar3 + 0x198) + 0x120)) *
               ((long)in_stack_00000010 - (long)in_stack_00000008 >> 3);
      puVar5 = (undefined8 *)FUN_032fb70c(1,lVar13 * 0x10 + 0x138);
      puVar5[0xf] = puVar5;
      *puVar5 = *param_1;
      puVar5[3] = param_1[3];
      in_stack_00000028 = 0;
      in_stack_00000030 = 0;
      in_stack_00000038 = (void *)0x0;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &stack0x00000028,(char *)param_1[2]);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &stack0x00000028,"[");
      if (1 < uVar11) {
        do {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&stack0x00000028,",");
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      if ((unaff_w23 & 1) != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &stack0x00000028,"*");
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &stack0x00000028,"]");
      pvVar2 = (void *)((ulong)&stack0x00000028 | 1);
      if ((in_stack_00000028 & 1) != 0) {
        pvVar2 = in_stack_00000038;
      }
      uVar6 = FUN_03300ea8(pvVar2);
      if ((in_stack_00000028 & 1) != 0) {
        operator_delete(in_stack_00000038);
      }
      puVar5[2] = uVar6;
      uVar6 = *(undefined8 *)(puVar3 + 0xa0);
      *(undefined4 *)(puVar5 + 0x23) = 0x2101;
      *(char *)((long)puVar5 + 0x132) = (char)param_2;
      puVar5[0xb] = uVar6;
      uVar4 = FUN_032dd228(lVar12);
      *(undefined4 *)(puVar5 + 0x1f) = uVar4;
      *(undefined4 *)((long)puVar5 + 0xfc) = 8;
      *(short *)((long)puVar5 + 0x12a) = (short)lVar13;
      FUN_032dd11c(param_1);
      uVar4 = FUN_032df4a4(param_1);
      puVar1 = param_1 + 4;
      *(undefined4 *)((long)puVar5 + 0x104) = uVar4;
      *(undefined4 *)((long)puVar5 + 0x114) = 0xffffffff;
      *(undefined4 *)(puVar5 + 0x21) = 0xffffffff;
      uVar7 = FUN_0331f780(puVar1);
      if ((uVar7 & 1) == 0) {
        uVar9 = *(ushort *)((long)param_1 + 0x135) & 0x20 | 0x100;
      }
      else {
        uVar9 = 0x120;
      }
      *(ushort *)((long)puVar5 + 0x135) = uVar9 | *(ushort *)((long)puVar5 + 0x135) & 0xfedf;
      puVar5[8] = param_1;
      FUN_032efb9c(puVar5);
      if (uVar11 < 2 && (param_3 & 1) == 0) {
        *(undefined1 *)((long)puVar5 + 0x2a) = 0x1d;
        uVar10 = 5;
        puVar5[4] = puVar1;
      }
      else {
        plVar8 = (long *)FUN_032fb70c(1,0x20);
        *(undefined1 *)((long)puVar5 + 0x2a) = 0x14;
        puVar5[4] = plVar8;
        *plVar8 = (long)puVar1;
        *(char *)(plVar8 + 1) = (char)param_2;
        uVar10 = 0;
      }
      *(undefined2 *)((long)puVar5 + 300) = uVar10;
      puVar5[7] = puVar5[5];
      puVar5[6] = puVar5[4];
      *(uint *)(puVar5 + 7) = *(uint *)(puVar5 + 7) | 0x20000000;
      uVar6 = FUN_032e193c(puVar5 + 4);
      puVar5[0xe] = uVar6;
      if (uVar11 < 2 && (param_3 & 1) == 0) {
        in_stack_00000028 = (ulong)in_stack_00000028._4_4_ << 0x20;
        in_stack_00000030 = puVar5[8];
        FUN_032f1484(&DAT_076ec138,&stack0x00000028);
      }
      else {
        in_stack_00000030 = puVar5[8];
        in_stack_00000028 = (ulong)in_stack_00000028._4_4_ << 0x20;
        in_stack_00000038 =
             (void *)CONCAT44(in_stack_00000038._4_4_,(uint)*(byte *)((long)puVar5 + 0x132));
        FUN_032f13ec(&DAT_076ec1a8,&stack0x00000028);
      }
      if (in_stack_00000008 != (void *)0x0) {
        in_stack_00000010 = in_stack_00000008;
        operator_delete(in_stack_00000008);
      }
    }
    FUN_03296ccc(&stack0x00000020);
  }
  return puVar5;
}


