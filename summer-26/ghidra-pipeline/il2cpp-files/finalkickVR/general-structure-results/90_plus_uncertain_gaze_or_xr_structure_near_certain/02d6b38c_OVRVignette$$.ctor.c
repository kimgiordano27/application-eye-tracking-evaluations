/*
FUNCTION_NAME: OVRVignette$$.ctor
ENTRY_POINT: 02d6b38c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_12;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_possible_biometrics_hits_5
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
OVRVignette___ctor(undefined8 *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4
                  ,undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4 *pOVar4;
  long unaff_x29;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *in_stack_00000060;
  undefined8 *puStack0000000000000068;
  undefined8 *puStack0000000000000070;
  undefined8 *puStack0000000000000078;
  ulong *puStack0000000000000080;
  ulong *puStack0000000000000088;
  ulong *puStack0000000000000090;
  undefined8 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 in_stack_000000e0;
  undefined8 uStack00000000000000e4;
  undefined1 in_stack_000000f8 [16];
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined4 in_stack_00000118;
  undefined4 in_stack_00000120;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 uStack000000000000015c;
  undefined8 uStack0000000000000164;
  undefined4 in_stack_00000170;
  int iStack0000000000000174;
  undefined4 in_stack_00000178;
  undefined4 in_stack_00000180;
  byte bStack000000000000018b;
  undefined4 uStack000000000000018c;
  OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4 *in_stack_00000190;
  int iStack000000000000019c;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  
  puVar1 = 
  Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
  ;
  puStack0000000000000070 = (undefined8 *)&stack0x00000134;
  puStack0000000000000078 =
       (undefined8 *)
       Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
  ;
  puStack0000000000000080 =
       (ulong *)Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  puStack0000000000000088 = (ulong *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_laneq_s32__;
  puStack0000000000000090 =
       (ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  *(undefined4 *)(unaff_x29 + -0x14) = param_6;
  *(undefined8 *)(unaff_x29 + -0x20) = param_7;
  puStack0000000000000068 = param_1;
  if ((OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000080);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000088);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000090);
    OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined4 *)(unaff_x29 + -100) = *(undefined4 *)(unaff_x29 + -0x14);
  if (*(int *)(unaff_x29 + -100) < 3) {
    *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(unaff_x29 + -0x14);
    if (*(int *)(unaff_x29 + -0x68) == 1) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000080);
      lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000080);
      *(undefined4 *)(unaff_x29 + -0x78) = *(undefined4 *)(lVar3 + 0x100);
      if (*(int *)(unaff_x29 + -0x78) == 1) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000078);
        lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000078);
        *(undefined4 *)(unaff_x29 + -0x7c) = *(undefined4 *)(lVar3 + 0x18);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000090);
        OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3
                  (0xc,*(undefined4 *)(unaff_x29 + -0x7c));
        *(undefined8 *)((long)in_stack_00000060 + 0x24) = in_stack_00000060[1];
        *(undefined8 *)((long)in_stack_00000060 + 0x1c) = *in_stack_00000060;
        *(undefined8 *)(unaff_x29 + -0x8c) = *(undefined8 *)(unaff_x29 + -0xa8);
        *(undefined8 *)(unaff_x29 + -0x94) = *(undefined8 *)(unaff_x29 + -0xb0);
        uVar6 = *(undefined8 *)((long)in_stack_00000060 + 0x1c);
        puStack0000000000000068[0x1b] = *(undefined8 *)((long)in_stack_00000060 + 0x24);
        puStack0000000000000068[0x1a] = uVar6;
        OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(&stack0x00000340,0);
        puStack0000000000000068[0x23] = *(undefined8 *)((long)puStack0000000000000068 + 0xfc);
        puStack0000000000000068[0x22] = *(undefined8 *)((long)puStack0000000000000068 + 0xf4);
        *(undefined8 *)(unaff_x29 + -0xcc) = *(undefined8 *)(unaff_x29 + -0xe8);
        *(undefined8 *)(unaff_x29 + -0xd4) = *(undefined8 *)(unaff_x29 + -0xf0);
        uVar6 = *(undefined8 *)(unaff_x29 + -0xd4);
        *(undefined8 *)((long)in_stack_00000060 + 0xb4) = *(undefined8 *)(unaff_x29 + -0xcc);
        *(undefined8 *)((long)in_stack_00000060 + 0xac) = uVar6;
      }
      else {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000080);
        lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000080);
        if (*(int *)(lVar3 + 0x100) == 2) {
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000078);
          lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000078);
          pOVar4 = *(OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4 **)
                    (lVar3 + 0x60);
          NullCheck(pOVar4);
          lVar3 = OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4::
                  GetAddressAt(pOVar4,0);
          uVar6 = *(undefined8 *)(lVar3 + 0x58);
          *(undefined8 *)((long)in_stack_00000060 + 0xb4) = *(undefined8 *)(lVar3 + 0x60);
          *(undefined8 *)((long)in_stack_00000060 + 0xac) = uVar6;
        }
        else {
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000078);
          lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000078);
          uVar5 = *(undefined4 *)(lVar3 + 0x18);
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000088);
          bVar2 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                            (4,5,0xc,uVar5,unaff_x29 + -0x30,0);
          if ((bVar2 & 1) == 0) {
            uVar5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                              ((MethodInfo *)0x0);
            *(ulong *)((long)in_stack_00000060 + 0xb4) = CONCAT44(param_5,param_4);
            *(ulong *)((long)in_stack_00000060 + 0xac) = CONCAT44(param_3,uVar5);
          }
          else {
            *(undefined8 *)((long)in_stack_00000060 + 0xb4) =
                 *(undefined8 *)((long)in_stack_00000060 + 0x94);
            *(undefined8 *)((long)in_stack_00000060 + 0xac) =
                 *(undefined8 *)((long)in_stack_00000060 + 0x8c);
          }
        }
      }
      goto FUN_02d6bc88;
    }
    *(undefined4 *)(unaff_x29 + -0x6c) = *(undefined4 *)(unaff_x29 + -0x14);
    if (*(int *)(unaff_x29 + -0x6c) == 2) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000080);
      lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000080);
      if (*(int *)(lVar3 + 0x100) == 1) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000078);
        lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000078);
        uVar5 = *(undefined4 *)(lVar3 + 0x18);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000090);
        OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3(0xd,uVar5);
        *(undefined8 *)((long)puStack0000000000000070 + 0xf4) = puStack0000000000000070[0x1b];
        *(undefined8 *)((long)puStack0000000000000070 + 0xec) = puStack0000000000000070[0x1a];
        *(undefined8 *)((long)puStack0000000000000070 + 0x74) =
             *(undefined8 *)((long)puStack0000000000000070 + 0xf4);
        *(undefined8 *)((long)puStack0000000000000070 + 0x6c) =
             *(undefined8 *)((long)puStack0000000000000070 + 0xec);
        OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(&stack0x000001a0,0);
        *(undefined8 *)((long)puStack0000000000000070 + 0xb4) = puStack0000000000000070[0x13];
        *(undefined8 *)((long)puStack0000000000000070 + 0xac) = puStack0000000000000070[0x12];
        *(undefined8 *)((long)in_stack_00000060 + 0xb4) = in_stack_000001d8;
        *(undefined8 *)((long)in_stack_00000060 + 0xac) = in_stack_000001d0;
      }
      else {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000080);
        lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000080);
        iStack000000000000019c = *(int *)(lVar3 + 0x100);
        if (iStack000000000000019c == 2) {
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000078);
          lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000078);
          in_stack_00000190 =
               *(OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4 **)
                (lVar3 + 0x60);
          NullCheck(in_stack_00000190);
          lVar3 = OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4::
                  GetAddressAt(in_stack_00000190,1);
          uVar6 = *(undefined8 *)(lVar3 + 0x58);
          *(undefined8 *)((long)in_stack_00000060 + 0xb4) = *(undefined8 *)(lVar3 + 0x60);
          *(undefined8 *)((long)in_stack_00000060 + 0xac) = uVar6;
        }
        else {
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000078);
          lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000078);
          uStack000000000000018c = *(undefined4 *)(lVar3 + 0x18);
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000088);
          bStack000000000000018b =
               OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                         (5,5,0xd,uStack000000000000018c,unaff_x29 + -0x50,0);
          bStack000000000000018b = bStack000000000000018b & 1;
          if (bStack000000000000018b == 0) {
            uVar5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                              ((MethodInfo *)0x0);
            *(ulong *)((long)in_stack_00000060 + 0xb4) = CONCAT44(param_5,param_4);
            *(ulong *)((long)in_stack_00000060 + 0xac) = CONCAT44(param_3,uVar5);
          }
          else {
            *(undefined8 *)((long)in_stack_00000060 + 0xb4) =
                 *(undefined8 *)((long)in_stack_00000060 + 0x74);
            *(undefined8 *)((long)in_stack_00000060 + 0xac) =
                 *(undefined8 *)((long)in_stack_00000060 + 0x6c);
          }
        }
      }
      goto FUN_02d6bc88;
    }
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x70) = *(undefined4 *)(unaff_x29 + -0x14);
    if (*(int *)(unaff_x29 + -0x70) == 0x20) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000080);
      lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000080);
      if (*(int *)(lVar3 + 0x100) == 1) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000078);
        lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000078);
        uVar5 = *(undefined4 *)(lVar3 + 0x18);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000090);
        OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3(3,uVar5);
        puStack0000000000000068[0x11] = *(undefined8 *)((long)puStack0000000000000068 + 0x6c);
        puStack0000000000000068[0x10] = *(undefined8 *)((long)puStack0000000000000068 + 100);
        puStack0000000000000068[1] = puStack0000000000000068[0x11];
        *puStack0000000000000068 = puStack0000000000000068[0x10];
        OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(&stack0x00000270,0);
        puStack0000000000000068[9] = *(undefined8 *)((long)puStack0000000000000068 + 0x2c);
        puStack0000000000000068[8] = *(undefined8 *)((long)puStack0000000000000068 + 0x24);
        *(undefined8 *)((long)in_stack_00000060 + 0xb4) = in_stack_000002a8;
        *(undefined8 *)((long)in_stack_00000060 + 0xac) = in_stack_000002a0;
      }
      else {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000080);
        lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000080);
        if (*(int *)(lVar3 + 0x100) == 2) {
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000078);
          lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000078);
          pOVar4 = *(OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4 **)
                    (lVar3 + 0x60);
          NullCheck(pOVar4);
          lVar3 = OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4::
                  GetAddressAt(pOVar4,0);
          uVar6 = *(undefined8 *)(lVar3 + 0x58);
          *(undefined8 *)((long)in_stack_00000060 + 0xb4) = *(undefined8 *)(lVar3 + 0x60);
          *(undefined8 *)((long)in_stack_00000060 + 0xac) = uVar6;
        }
        else {
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000078);
          lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000078);
          uVar5 = *(undefined4 *)(lVar3 + 0x18);
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000088);
          bVar2 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                            (4,5,3,uVar5,unaff_x29 + -0x40,0);
          if ((bVar2 & 1) == 0) {
            uVar5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                              ((MethodInfo *)0x0);
            *(ulong *)((long)in_stack_00000060 + 0xb4) = CONCAT44(param_5,param_4);
            *(ulong *)((long)in_stack_00000060 + 0xac) = CONCAT44(param_3,uVar5);
          }
          else {
            *(undefined8 *)((long)in_stack_00000060 + 0xb4) =
                 *(undefined8 *)((long)in_stack_00000060 + 0x84);
            *(undefined8 *)((long)in_stack_00000060 + 0xac) =
                 *(undefined8 *)((long)in_stack_00000060 + 0x7c);
          }
        }
      }
      goto FUN_02d6bc88;
    }
    *(undefined4 *)(unaff_x29 + -0x74) = *(undefined4 *)(unaff_x29 + -0x14);
    if (*(int *)(unaff_x29 + -0x74) == 0x40) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000080);
      lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000080);
      iStack0000000000000174 = *(int *)(lVar3 + 0x100);
      if (iStack0000000000000174 == 1) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000078);
        lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000078);
        in_stack_00000170 = *(undefined4 *)(lVar3 + 0x18);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000090);
        OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3(4,in_stack_00000170);
        *(undefined8 *)((long)puStack0000000000000070 + 0x24) = puStack0000000000000070[1];
        *(undefined8 *)((long)puStack0000000000000070 + 0x1c) = *puStack0000000000000070;
        uStack00000000000000e4 = in_stack_00000148;
        uStack000000000000015c = in_stack_00000140;
        in_stack_000000d0 = *(undefined8 *)((long)puStack0000000000000070 + 0x1c);
        in_stack_000000d8 = (undefined4)*(undefined8 *)((long)puStack0000000000000070 + 0x24);
        uStack00000000000000dc = (undefined4)in_stack_00000140;
        in_stack_000000e0 = (undefined4)((ulong)in_stack_00000140 >> 0x20);
        uStack0000000000000164 = uStack00000000000000e4;
        OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(&stack0x000000d0,0);
        *(undefined8 *)((long)in_stack_00000060 + 0xb4) = in_stack_00000108;
        *(ulong *)((long)in_stack_00000060 + 0xac) =
             CONCAT44(in_stack_000000f8._12_4_,in_stack_000000f8._8_4_);
      }
      else {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000080);
        lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000080);
        if (*(int *)(lVar3 + 0x100) == 2) {
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000078);
          lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000078);
          pOVar4 = *(OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4 **)
                    (lVar3 + 0x60);
          NullCheck(pOVar4);
          lVar3 = OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4::
                  GetAddressAt(pOVar4,1);
          uVar6 = *(undefined8 *)(lVar3 + 0x58);
          *(undefined8 *)((long)in_stack_00000060 + 0xb4) = *(undefined8 *)(lVar3 + 0x60);
          *(undefined8 *)((long)in_stack_00000060 + 0xac) = uVar6;
        }
        else {
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000078);
          lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000078);
          uVar5 = *(undefined4 *)(lVar3 + 0x18);
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000088);
          bVar2 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                            (5,5,4,uVar5,unaff_x29 + -0x60,0);
          if ((bVar2 & 1) == 0) {
            uVar5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                              ((MethodInfo *)0x0);
            *(ulong *)((long)in_stack_00000060 + 0xb4) = CONCAT44(param_5,param_4);
            *(ulong *)((long)in_stack_00000060 + 0xac) = CONCAT44(param_3,uVar5);
          }
          else {
            *(undefined8 *)((long)in_stack_00000060 + 0xb4) =
                 *(undefined8 *)((long)in_stack_00000060 + 100);
            *(undefined8 *)((long)in_stack_00000060 + 0xac) =
                 *(undefined8 *)((long)in_stack_00000060 + 0x5c);
          }
        }
      }
      goto FUN_02d6bc88;
    }
  }
  uVar5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                    ((MethodInfo *)0x0);
  *(ulong *)((long)in_stack_00000060 + 0xb4) = CONCAT44(param_5,param_4);
  *(ulong *)((long)in_stack_00000060 + 0xac) = CONCAT44(param_3,uVar5);
FUN_02d6bc88:
  return *(undefined4 *)(unaff_x29 + -0x10);
}


