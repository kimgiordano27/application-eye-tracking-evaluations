/*
FUNCTION_NAME: OVR.OpenVR.CVRScreenshots$$GetScreenshotPropertyType
ENTRY_POINT: 02dba750
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVR_OpenVR_CVRScreenshots__GetScreenshotPropertyType(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *pBVar6;
  long in_stack_000008e8;
  byte *in_stack_000008f0;
  long *in_stack_000008f8;
  undefined4 *in_stack_00000900;
  undefined8 *in_stack_00000908;
  undefined8 *in_stack_00000910;
  undefined8 *in_stack_00000918;
  undefined8 *in_stack_00000920;
  undefined8 *in_stack_00000928;
  undefined8 *in_stack_00000930;
  undefined8 *in_stack_00000938;
  
  in_stack_000008f0[0x29] = 0;
  in_stack_000008f0[0x2a] = 0;
  in_stack_000008f0[0x2b] = 0;
  in_stack_000008f0[0x2c] = 0;
  in_stack_000008f0[0x2d] = 0;
  in_stack_000008f0[0x2e] = 0;
  in_stack_000008f0[0x2f] = 0;
  in_stack_000008f0[0x30] = 0;
  in_stack_000008f0[0x21] = 0;
  in_stack_000008f0[0x22] = 0;
  in_stack_000008f0[0x23] = 0;
  in_stack_000008f0[0x24] = 0;
  in_stack_000008f0[0x25] = 0;
  in_stack_000008f0[0x26] = 0;
  in_stack_000008f0[0x27] = 0;
  in_stack_000008f0[0x28] = 0;
  in_stack_000008f0[0x1d] = 0;
  in_stack_000008f0[0x1e] = 0;
  in_stack_000008f0[0x1f] = 0;
  in_stack_000008f0[0x20] = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000938);
  uVar2 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
  *(undefined4 *)(in_stack_000008f0 + 0x19) = uVar2;
  if ((*(int *)(in_stack_000008f0 + 0x19) == 3) &&
     (*(undefined4 *)(in_stack_000008f0 + 0x15) = *(undefined4 *)(in_stack_000008e8 + 0x10),
     *(int *)(in_stack_000008f0 + 0x15) == 0)) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
               ,0);
    *(undefined4 *)(in_stack_000008e8 + 0x10) = 0xffffffff;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000938);
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(in_stack_000008f0 + 9) = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000930);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000930);
  *(undefined8 *)(in_stack_000008f0 + 1) = *puVar4;
  bVar1 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E
                    (*(undefined8 *)(in_stack_000008f0 + 9),*(undefined8 *)(in_stack_000008f0 + 1),0
                    );
  *in_stack_000008f0 = bVar1 & 1;
  if ((*in_stack_000008f0 & 1) == 0) {
    in_stack_000008f8[0x2cb] = *(long *)(in_stack_000008e8 + 8);
    in_stack_000008f8[0x2ca] = *(long *)in_stack_000008f8[0x2cb];
    in_stack_000008f8[0x2c9] = in_stack_000008f8[0x2ca];
    if (in_stack_000008f8[0x2c9] == 0) {
      *(long *)(in_stack_000008f0 + 0x21) = in_stack_000008f8[0x2c9];
      in_stack_000008f0[0x1d] = 1;
      in_stack_000008f0[0x1e] = 0;
      in_stack_000008f0[0x1f] = 0;
      in_stack_000008f0[0x20] = 0;
    }
    else {
      *(long *)(in_stack_000008f0 + 0x29) = in_stack_000008f8[0x2c9];
      NullCheck(*(void **)(in_stack_000008f0 + 0x29));
      *(uint *)(in_stack_000008f0 + 0x1d) =
           (uint)((int)*(undefined8 *)(*(long *)(in_stack_000008f0 + 0x29) + 0x18) != 0x46);
    }
    if (*(int *)(in_stack_000008f0 + 0x1d) != 0) {
      in_stack_000008f8[0x2c8] = *(long *)(in_stack_000008e8 + 8);
      lVar5 = SZArrayNew(*(Il2CppClass **)
                          Field_<PrivateImplementationDetails>_F99AADCF7FEDEE35982AD395962CB9FFDB2CC256EA5075300D87D3032F92610F
                         ,0x46);
      in_stack_000008f8[0x2c7] = lVar5;
      *(long *)in_stack_000008f8[0x2c8] = in_stack_000008f8[0x2c7];
      Il2CppCodeGenWriteBarrier((void **)in_stack_000008f8[0x2c8],(void *)in_stack_000008f8[0x2c7]);
    }
    *(undefined4 *)((long)in_stack_000008f8 + 0x1634) = *(undefined4 *)(in_stack_000008e8 + 0x10);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000930);
    uVar2 = OVRP_1_78_0_ovrp_GetBodyState_m484C32B1406B0071178AF4E2BBE43CC99A09D98D
                      (*(undefined4 *)((long)in_stack_000008f8 + 0x1634),0xffffffff,&stack0x00035470
                       ,0);
    *(undefined4 *)(in_stack_000008f8 + 0x2c6) = uVar2;
    if ((int)in_stack_000008f8[0x2c6] == 0) {
      memcpy(&stack0x00034900,&stack0x00035470,0xb08);
      *(int *)((long)in_stack_000008f8 + 0xb24) = (int)in_stack_000008f8[0x165];
      if (*(int *)((long)in_stack_000008f8 + 0xb24) == 1) {
        in_stack_000008f8[0x163] = *(long *)(in_stack_000008e8 + 8);
        memcpy(&stack0x00033de8,&stack0x00035470,0xb08);
        *(undefined4 *)((long)in_stack_000008f8 + 0xc) =
             *(undefined4 *)((long)in_stack_000008f8 + 0x14);
        *(undefined4 *)(in_stack_000008f8[0x163] + 8) =
             *(undefined4 *)((long)in_stack_000008f8 + 0xc);
        *in_stack_000008f8 = *(long *)(in_stack_000008e8 + 8);
        memcpy(&stack0x000332d0,&stack0x00035470,0xb08);
        *in_stack_00000900 = in_stack_00000900[3];
        *(undefined4 *)(*in_stack_000008f8 + 0xc) = *in_stack_00000900;
        in_stack_00000908[0xfa6] = *(undefined8 *)(in_stack_000008e8 + 8);
        memcpy(&stack0x000327b8,&stack0x00035470,0xb08);
        in_stack_00000908[0xe44] = in_stack_00000908[0xe47];
        *(undefined8 *)(in_stack_00000908[0xfa6] + 0x10) = in_stack_00000908[0xe44];
        in_stack_00000908[0xe43] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000908[0xe42] = *(undefined8 *)in_stack_00000908[0xe43];
        memcpy(&stack0x00031c98,&stack0x00035470,0xb08);
        memcpy(&stack0x00031c70,&stack0x00031cb0,0x28);
        NullCheck((void *)in_stack_00000908[0xe42]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000908[0xe42];
        memcpy(&stack0x00031c48,&stack0x00031c70,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0,&stack0x00031c48);
        in_stack_00000908[0xcd6] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000908[0xcd5] = *(undefined8 *)in_stack_00000908[0xcd6];
        memcpy(&stack0x00031130,&stack0x00035470,0xb08);
        memcpy(&stack0x00031108,&stack0x00031170,0x28);
        NullCheck((void *)in_stack_00000908[0xcd5]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000908[0xcd5];
        memcpy(&stack0x000310e0,&stack0x00031108,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,1,&stack0x000310e0);
        in_stack_00000908[0xb69] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000908[0xb68] = *(undefined8 *)in_stack_00000908[0xb69];
        memcpy(&stack0x000305c8,&stack0x00035470,0xb08);
        memcpy(&stack0x000305a0,&stack0x00030630,0x28);
        NullCheck((void *)in_stack_00000908[0xb68]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000908[0xb68];
        memcpy(&stack0x00030578,&stack0x000305a0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,2,&stack0x00030578);
        in_stack_00000908[0x9fc] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000908[0x9fb] = *(undefined8 *)in_stack_00000908[0x9fc];
        memcpy(&stack0x0002fa60,&stack0x00035470,0xb08);
        memcpy(&stack0x0002fa38,&stack0x0002faf0,0x28);
        NullCheck((void *)in_stack_00000908[0x9fb]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000908[0x9fb];
        memcpy(&stack0x0002fa10,&stack0x0002fa38,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,3,&stack0x0002fa10);
        in_stack_00000908[0x88f] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000908[0x88e] = *(undefined8 *)in_stack_00000908[0x88f];
        memcpy(&stack0x0002eef8,&stack0x00035470,0xb08);
        memcpy(&stack0x0002eed0,&stack0x0002efb0,0x28);
        NullCheck((void *)in_stack_00000908[0x88e]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000908[0x88e];
        memcpy(&stack0x0002eea8,&stack0x0002eed0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,4,&stack0x0002eea8);
        in_stack_00000908[0x722] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000908[0x721] = *(undefined8 *)in_stack_00000908[0x722];
        memcpy(&stack0x0002e390,&stack0x00035470,0xb08);
        memcpy(&stack0x0002e368,&stack0x0002e470,0x28);
        NullCheck((void *)in_stack_00000908[0x721]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000908[0x721];
        memcpy(&stack0x0002e340,&stack0x0002e368,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,5,&stack0x0002e340);
        in_stack_00000908[0x5b5] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000908[0x5b4] = *(undefined8 *)in_stack_00000908[0x5b5];
        memcpy(&stack0x0002d828,&stack0x00035470,0xb08);
        memcpy(&stack0x0002d800,&stack0x0002d930,0x28);
        NullCheck((void *)in_stack_00000908[0x5b4]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000908[0x5b4];
        memcpy(&stack0x0002d7d8,&stack0x0002d800,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,6,&stack0x0002d7d8);
        in_stack_00000908[0x448] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000908[0x447] = *(undefined8 *)in_stack_00000908[0x448];
        memcpy(&stack0x0002ccc0,&stack0x00035470,0xb08);
        memcpy(&stack0x0002cc98,&stack0x0002cdf0,0x28);
        NullCheck((void *)in_stack_00000908[0x447]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000908[0x447];
        memcpy(&stack0x0002cc70,&stack0x0002cc98,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,7,&stack0x0002cc70);
        in_stack_00000908[0x2db] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000908[0x2da] = *(undefined8 *)in_stack_00000908[0x2db];
        memcpy(&stack0x0002c158,&stack0x00035470,0xb08);
        memcpy(&stack0x0002c130,&stack0x0002c2b0,0x28);
        NullCheck((void *)in_stack_00000908[0x2da]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000908[0x2da];
        memcpy(&stack0x0002c108,&stack0x0002c130,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,8,&stack0x0002c108);
        in_stack_00000908[0x16e] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000908[0x16d] = *(undefined8 *)in_stack_00000908[0x16e];
        memcpy(&stack0x0002b5f0,&stack0x00035470,0xb08);
        memcpy(&stack0x0002b5c8,&stack0x0002b770,0x28);
        NullCheck((void *)in_stack_00000908[0x16d]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000908[0x16d];
        memcpy(&stack0x0002b5a0,&stack0x0002b5c8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,9,&stack0x0002b5a0);
        in_stack_00000908[1] = *(undefined8 *)(in_stack_000008e8 + 8);
        *in_stack_00000908 = *(undefined8 *)in_stack_00000908[1];
        memcpy(&stack0x0002aa88,&stack0x00035470,0xb08);
        memcpy(&stack0x0002aa60,&stack0x0002ac30,0x28);
        NullCheck((void *)*in_stack_00000908);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 *in_stack_00000908;
        memcpy(&stack0x0002aa38,&stack0x0002aa60,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,10,&stack0x0002aa38);
        in_stack_00000910[0xfb0] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000910[0xfaf] = *(undefined8 *)in_stack_00000910[0xfb0];
        memcpy(&stack0x00029f20,&stack0x00035470,0xb08);
        memcpy(&stack0x00029ef8,&stack0x0002a0f0,0x28);
        NullCheck((void *)in_stack_00000910[0xfaf]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000910[0xfaf];
        memcpy(&stack0x00029ed0,&stack0x00029ef8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0xb,&stack0x00029ed0);
        in_stack_00000910[0xe43] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000910[0xe42] = *(undefined8 *)in_stack_00000910[0xe43];
        memcpy(&stack0x000293b8,&stack0x00035470,0xb08);
        memcpy(&stack0x00029390,&stack0x000295b0,0x28);
        NullCheck((void *)in_stack_00000910[0xe42]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000910[0xe42];
        memcpy(&stack0x00029368,&stack0x00029390,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0xc,&stack0x00029368);
        in_stack_00000910[0xcd6] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000910[0xcd5] = *(undefined8 *)in_stack_00000910[0xcd6];
        memcpy(&stack0x00028850,&stack0x00035470,0xb08);
        memcpy(&stack0x00028828,&stack0x00028a70,0x28);
        NullCheck((void *)in_stack_00000910[0xcd5]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000910[0xcd5];
        memcpy(&stack0x00028800,&stack0x00028828,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0xd,&stack0x00028800);
        in_stack_00000910[0xb69] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000910[0xb68] = *(undefined8 *)in_stack_00000910[0xb69];
        memcpy(&stack0x00027ce8,&stack0x00035470,0xb08);
        memcpy(&stack0x00027cc0,&stack0x00027f30,0x28);
        NullCheck((void *)in_stack_00000910[0xb68]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000910[0xb68];
        memcpy(&stack0x00027c98,&stack0x00027cc0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0xe,&stack0x00027c98);
        in_stack_00000910[0x9fc] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000910[0x9fb] = *(undefined8 *)in_stack_00000910[0x9fc];
        memcpy(&stack0x00027180,&stack0x00035470,0xb08);
        memcpy(&stack0x00027158,&stack0x000273f0,0x28);
        NullCheck((void *)in_stack_00000910[0x9fb]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000910[0x9fb];
        memcpy(&stack0x00027130,&stack0x00027158,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0xf,&stack0x00027130);
        in_stack_00000910[0x88f] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000910[0x88e] = *(undefined8 *)in_stack_00000910[0x88f];
        memcpy(&stack0x00026618,&stack0x00035470,0xb08);
        memcpy(&stack0x000265f0,&stack0x000268b0,0x28);
        NullCheck((void *)in_stack_00000910[0x88e]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000910[0x88e];
        memcpy(&stack0x000265c8,&stack0x000265f0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x10,&stack0x000265c8);
        in_stack_00000910[0x722] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000910[0x721] = *(undefined8 *)in_stack_00000910[0x722];
        memcpy(&stack0x00025ab0,&stack0x00035470,0xb08);
        memcpy(&stack0x00025a88,&stack0x00025d70,0x28);
        NullCheck((void *)in_stack_00000910[0x721]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000910[0x721];
        memcpy(&stack0x00025a60,&stack0x00025a88,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x11,&stack0x00025a60);
        in_stack_00000910[0x5b5] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000910[0x5b4] = *(undefined8 *)in_stack_00000910[0x5b5];
        memcpy(&stack0x00024f48,&stack0x00035470,0xb08);
        memcpy(&stack0x00024f20,&stack0x00025230,0x28);
        NullCheck((void *)in_stack_00000910[0x5b4]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000910[0x5b4];
        memcpy(&stack0x00024ef8,&stack0x00024f20,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x12,&stack0x00024ef8);
        in_stack_00000910[0x448] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000910[0x447] = *(undefined8 *)in_stack_00000910[0x448];
        memcpy(&stack0x000243e0,&stack0x00035470,0xb08);
        memcpy(&stack0x000243b8,&stack0x000246f0,0x28);
        NullCheck((void *)in_stack_00000910[0x447]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000910[0x447];
        memcpy(&stack0x00024390,&stack0x000243b8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x13,&stack0x00024390);
        in_stack_00000910[0x2db] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000910[0x2da] = *(undefined8 *)in_stack_00000910[0x2db];
        memcpy(&stack0x00023878,&stack0x00035470,0xb08);
        memcpy(&stack0x00023850,&stack0x00023bb0,0x28);
        NullCheck((void *)in_stack_00000910[0x2da]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000910[0x2da];
        memcpy(&stack0x00023828,&stack0x00023850,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x14,&stack0x00023828);
        in_stack_00000910[0x16e] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000910[0x16d] = *(undefined8 *)in_stack_00000910[0x16e];
        memcpy(&stack0x00022d10,&stack0x00035470,0xb08);
        memcpy(&stack0x00022ce8,&stack0x00023070,0x28);
        NullCheck((void *)in_stack_00000910[0x16d]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000910[0x16d];
        memcpy(&stack0x00022cc0,&stack0x00022ce8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x15,&stack0x00022cc0);
        in_stack_00000910[1] = *(undefined8 *)(in_stack_000008e8 + 8);
        *in_stack_00000910 = *(undefined8 *)in_stack_00000910[1];
        memcpy(&stack0x000221a8,&stack0x00035470,0xb08);
        memcpy(&stack0x00022180,&stack0x00022530,0x28);
        NullCheck((void *)*in_stack_00000910);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 *in_stack_00000910;
        memcpy(&stack0x00022158,&stack0x00022180,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x16,&stack0x00022158);
        in_stack_00000918[0xfb0] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000918[0xfaf] = *(undefined8 *)in_stack_00000918[0xfb0];
        memcpy(&stack0x00021640,&stack0x00035470,0xb08);
        memcpy(&stack0x00021618,&stack0x000219f0,0x28);
        NullCheck((void *)in_stack_00000918[0xfaf]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000918[0xfaf];
        memcpy(&stack0x000215f0,&stack0x00021618,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x17,&stack0x000215f0);
        in_stack_00000918[0xe43] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000918[0xe42] = *(undefined8 *)in_stack_00000918[0xe43];
        memcpy(&stack0x00020ad8,&stack0x00035470,0xb08);
        memcpy(&stack0x00020ab0,&stack0x00020eb0,0x28);
        NullCheck((void *)in_stack_00000918[0xe42]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000918[0xe42];
        memcpy(&stack0x00020a88,&stack0x00020ab0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x18,&stack0x00020a88);
        in_stack_00000918[0xcd6] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000918[0xcd5] = *(undefined8 *)in_stack_00000918[0xcd6];
        memcpy(&stack0x0001ff70,&stack0x00035470,0xb08);
        memcpy(&stack0x0001ff48,&stack0x00020370,0x28);
        NullCheck((void *)in_stack_00000918[0xcd5]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000918[0xcd5];
        memcpy(&stack0x0001ff20,&stack0x0001ff48,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x19,&stack0x0001ff20);
        in_stack_00000918[0xb69] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000918[0xb68] = *(undefined8 *)in_stack_00000918[0xb69];
        memcpy(&stack0x0001f408,&stack0x00035470,0xb08);
        memcpy(&stack0x0001f3e0,&stack0x0001f830,0x28);
        NullCheck((void *)in_stack_00000918[0xb68]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000918[0xb68];
        memcpy(&stack0x0001f3b8,&stack0x0001f3e0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x1a,&stack0x0001f3b8);
        in_stack_00000918[0x9fc] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000918[0x9fb] = *(undefined8 *)in_stack_00000918[0x9fc];
        memcpy(&stack0x0001e8a0,&stack0x00035470,0xb08);
        memcpy(&stack0x0001e878,&stack0x0001ecf0,0x28);
        NullCheck((void *)in_stack_00000918[0x9fb]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000918[0x9fb];
        memcpy(&stack0x0001e850,&stack0x0001e878,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x1b,&stack0x0001e850);
        in_stack_00000918[0x88f] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000918[0x88e] = *(undefined8 *)in_stack_00000918[0x88f];
        memcpy(&stack0x0001dd38,&stack0x00035470,0xb08);
        memcpy(&stack0x0001dd10,&stack0x0001e1b0,0x28);
        NullCheck((void *)in_stack_00000918[0x88e]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000918[0x88e];
        memcpy(&stack0x0001dce8,&stack0x0001dd10,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x1c,&stack0x0001dce8);
        in_stack_00000918[0x722] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000918[0x721] = *(undefined8 *)in_stack_00000918[0x722];
        memcpy(&stack0x0001d1d0,&stack0x00035470,0xb08);
        memcpy(&stack0x0001d1a8,&stack0x0001d670,0x28);
        NullCheck((void *)in_stack_00000918[0x721]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000918[0x721];
        memcpy(&stack0x0001d180,&stack0x0001d1a8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x1d,&stack0x0001d180);
        in_stack_00000918[0x5b5] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000918[0x5b4] = *(undefined8 *)in_stack_00000918[0x5b5];
        memcpy(&stack0x0001c668,&stack0x00035470,0xb08);
        memcpy(&stack0x0001c640,&stack0x0001cb30,0x28);
        NullCheck((void *)in_stack_00000918[0x5b4]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000918[0x5b4];
        memcpy(&stack0x0001c618,&stack0x0001c640,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x1e,&stack0x0001c618);
        in_stack_00000918[0x448] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000918[0x447] = *(undefined8 *)in_stack_00000918[0x448];
        memcpy(&stack0x0001bb00,&stack0x00035470,0xb08);
        memcpy(&stack0x0001bad8,&stack0x0001bff0,0x28);
        NullCheck((void *)in_stack_00000918[0x447]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000918[0x447];
        memcpy(&stack0x0001bab0,&stack0x0001bad8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x1f,&stack0x0001bab0);
        in_stack_00000918[0x2db] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000918[0x2da] = *(undefined8 *)in_stack_00000918[0x2db];
        memcpy(&stack0x0001af98,&stack0x00035470,0xb08);
        memcpy(&stack0x0001af70,&stack0x0001b4b0,0x28);
        NullCheck((void *)in_stack_00000918[0x2da]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000918[0x2da];
        memcpy(&stack0x0001af48,&stack0x0001af70,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x20,&stack0x0001af48);
        in_stack_00000918[0x16e] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000918[0x16d] = *(undefined8 *)in_stack_00000918[0x16e];
        memcpy(&stack0x0001a430,&stack0x00035470,0xb08);
        memcpy(&stack0x0001a408,&stack0x0001a970,0x28);
        NullCheck((void *)in_stack_00000918[0x16d]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000918[0x16d];
        memcpy(&stack0x0001a3e0,&stack0x0001a408,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x21,&stack0x0001a3e0);
        in_stack_00000918[1] = *(undefined8 *)(in_stack_000008e8 + 8);
        *in_stack_00000918 = *(undefined8 *)in_stack_00000918[1];
        memcpy(&stack0x000198c8,&stack0x00035470,0xb08);
        memcpy(&stack0x000198a0,&stack0x00019e30,0x28);
        NullCheck((void *)*in_stack_00000918);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 *in_stack_00000918;
        memcpy(&stack0x00019878,&stack0x000198a0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x22,&stack0x00019878);
        in_stack_00000920[0xfb0] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000920[0xfaf] = *(undefined8 *)in_stack_00000920[0xfb0];
        memcpy(&stack0x00018d60,&stack0x00035470,0xb08);
        memcpy(&stack0x00018d38,&stack0x000192f0,0x28);
        NullCheck((void *)in_stack_00000920[0xfaf]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000920[0xfaf];
        memcpy(&stack0x00018d10,&stack0x00018d38,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x23,&stack0x00018d10);
        in_stack_00000920[0xe43] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000920[0xe42] = *(undefined8 *)in_stack_00000920[0xe43];
        memcpy(&stack0x000181f8,&stack0x00035470,0xb08);
        memcpy(&stack0x000181d0,&stack0x000187b0,0x28);
        NullCheck((void *)in_stack_00000920[0xe42]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000920[0xe42];
        memcpy(&stack0x000181a8,&stack0x000181d0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x24,&stack0x000181a8);
        in_stack_00000920[0xcd6] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000920[0xcd5] = *(undefined8 *)in_stack_00000920[0xcd6];
        memcpy(&stack0x00017690,&stack0x00035470,0xb08);
        memcpy(&stack0x00017668,&stack0x00017c70,0x28);
        NullCheck((void *)in_stack_00000920[0xcd5]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000920[0xcd5];
        memcpy(&stack0x00017640,&stack0x00017668,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x25,&stack0x00017640);
        in_stack_00000920[0xb69] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000920[0xb68] = *(undefined8 *)in_stack_00000920[0xb69];
        memcpy(&stack0x00016b28,&stack0x00035470,0xb08);
        memcpy(&stack0x00016b00,&stack0x00017130,0x28);
        NullCheck((void *)in_stack_00000920[0xb68]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000920[0xb68];
        memcpy(&stack0x00016ad8,&stack0x00016b00,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x26,&stack0x00016ad8);
        in_stack_00000920[0x9fc] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000920[0x9fb] = *(undefined8 *)in_stack_00000920[0x9fc];
        memcpy(&stack0x00015fc0,&stack0x00035470,0xb08);
        memcpy(&stack0x00015f98,&stack0x000165f0,0x28);
        NullCheck((void *)in_stack_00000920[0x9fb]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000920[0x9fb];
        memcpy(&stack0x00015f70,&stack0x00015f98,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x27,&stack0x00015f70);
        in_stack_00000920[0x88f] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000920[0x88e] = *(undefined8 *)in_stack_00000920[0x88f];
        memcpy(&stack0x00015458,&stack0x00035470,0xb08);
        memcpy(&stack0x00015430,&stack0x00015ab0,0x28);
        NullCheck((void *)in_stack_00000920[0x88e]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000920[0x88e];
        memcpy(&stack0x00015408,&stack0x00015430,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x28,&stack0x00015408);
        in_stack_00000920[0x722] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000920[0x721] = *(undefined8 *)in_stack_00000920[0x722];
        memcpy(&stack0x000148f0,&stack0x00035470,0xb08);
        memcpy(&stack0x000148c8,&stack0x00014f70,0x28);
        NullCheck((void *)in_stack_00000920[0x721]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000920[0x721];
        memcpy(&stack0x000148a0,&stack0x000148c8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x29,&stack0x000148a0);
        in_stack_00000920[0x5b5] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000920[0x5b4] = *(undefined8 *)in_stack_00000920[0x5b5];
        memcpy(&stack0x00013d88,&stack0x00035470,0xb08);
        memcpy(&stack0x00013d60,&stack0x00014430,0x28);
        NullCheck((void *)in_stack_00000920[0x5b4]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000920[0x5b4];
        memcpy(&stack0x00013d38,&stack0x00013d60,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x2a,&stack0x00013d38);
        in_stack_00000920[0x448] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000920[0x447] = *(undefined8 *)in_stack_00000920[0x448];
        memcpy(&stack0x00013220,&stack0x00035470,0xb08);
        memcpy(&stack0x000131f8,&stack0x000138f0,0x28);
        NullCheck((void *)in_stack_00000920[0x447]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000920[0x447];
        memcpy(&stack0x000131d0,&stack0x000131f8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x2b,&stack0x000131d0);
        in_stack_00000920[0x2db] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000920[0x2da] = *(undefined8 *)in_stack_00000920[0x2db];
        memcpy(&stack0x000126b8,&stack0x00035470,0xb08);
        memcpy(&stack0x00012690,&stack0x00012db0,0x28);
        NullCheck((void *)in_stack_00000920[0x2da]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000920[0x2da];
        memcpy(&stack0x00012668,&stack0x00012690,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x2c,&stack0x00012668);
        in_stack_00000920[0x16e] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000920[0x16d] = *(undefined8 *)in_stack_00000920[0x16e];
        memcpy(&stack0x00011b50,&stack0x00035470,0xb08);
        memcpy(&stack0x00011b28,&stack0x00012270,0x28);
        NullCheck((void *)in_stack_00000920[0x16d]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000920[0x16d];
        memcpy(&stack0x00011b00,&stack0x00011b28,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x2d,&stack0x00011b00);
        in_stack_00000920[1] = *(undefined8 *)(in_stack_000008e8 + 8);
        *in_stack_00000920 = *(undefined8 *)in_stack_00000920[1];
        memcpy(&stack0x00010fe8,&stack0x00035470,0xb08);
        memcpy(&stack0x00010fc0,&stack0x00011730,0x28);
        NullCheck((void *)*in_stack_00000920);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 *in_stack_00000920;
        memcpy(&stack0x00010f98,&stack0x00010fc0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x2e,&stack0x00010f98);
        in_stack_00000928[0xfb0] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000928[0xfaf] = *(undefined8 *)in_stack_00000928[0xfb0];
        memcpy(&stack0x00010480,&stack0x00035470,0xb08);
        memcpy(&stack0x00010458,&stack0x00010bf0,0x28);
        NullCheck((void *)in_stack_00000928[0xfaf]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000928[0xfaf];
        memcpy(&stack0x00010430,&stack0x00010458,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x2f,&stack0x00010430);
        in_stack_00000928[0xe43] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000928[0xe42] = *(undefined8 *)in_stack_00000928[0xe43];
        memcpy(&stack0x0000f918,&stack0x00035470,0xb08);
        memcpy(&stack0x0000f8f0,&stack0x000100b0,0x28);
        NullCheck((void *)in_stack_00000928[0xe42]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000928[0xe42];
        memcpy(&stack0x0000f8c8,&stack0x0000f8f0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x30,&stack0x0000f8c8);
        in_stack_00000928[0xcd6] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000928[0xcd5] = *(undefined8 *)in_stack_00000928[0xcd6];
        memcpy(&stack0x0000edb0,&stack0x00035470,0xb08);
        memcpy(&stack0x0000ed88,&stack0x0000f570,0x28);
        NullCheck((void *)in_stack_00000928[0xcd5]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000928[0xcd5];
        memcpy(&stack0x0000ed60,&stack0x0000ed88,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x31,&stack0x0000ed60);
        in_stack_00000928[0xb69] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000928[0xb68] = *(undefined8 *)in_stack_00000928[0xb69];
        memcpy(&stack0x0000e248,&stack0x00035470,0xb08);
        memcpy(&stack0x0000e220,&stack0x0000ea30,0x28);
        NullCheck((void *)in_stack_00000928[0xb68]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000928[0xb68];
        memcpy(&stack0x0000e1f8,&stack0x0000e220,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x32,&stack0x0000e1f8);
        in_stack_00000928[0x9fc] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000928[0x9fb] = *(undefined8 *)in_stack_00000928[0x9fc];
        memcpy(&stack0x0000d6e0,&stack0x00035470,0xb08);
        memcpy(&stack0x0000d6b8,&stack0x0000def0,0x28);
        NullCheck((void *)in_stack_00000928[0x9fb]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000928[0x9fb];
        memcpy(&stack0x0000d690,&stack0x0000d6b8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x33,&stack0x0000d690);
        in_stack_00000928[0x88f] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000928[0x88e] = *(undefined8 *)in_stack_00000928[0x88f];
        memcpy(&stack0x0000cb78,&stack0x00035470,0xb08);
        memcpy(&stack0x0000cb50,&stack0x0000d3b0,0x28);
        NullCheck((void *)in_stack_00000928[0x88e]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000928[0x88e];
        memcpy(&stack0x0000cb28,&stack0x0000cb50,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x34,&stack0x0000cb28);
        in_stack_00000928[0x722] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000928[0x721] = *(undefined8 *)in_stack_00000928[0x722];
        memcpy(&stack0x0000c010,&stack0x00035470,0xb08);
        memcpy(&stack0x0000bfe8,&stack0x0000c870,0x28);
        NullCheck((void *)in_stack_00000928[0x721]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000928[0x721];
        memcpy(&stack0x0000bfc0,&stack0x0000bfe8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x35,&stack0x0000bfc0);
        in_stack_00000928[0x5b5] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000928[0x5b4] = *(undefined8 *)in_stack_00000928[0x5b5];
        memcpy(&stack0x0000b4a8,&stack0x00035470,0xb08);
        memcpy(&stack0x0000b480,&stack0x0000bd30,0x28);
        NullCheck((void *)in_stack_00000928[0x5b4]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000928[0x5b4];
        memcpy(&stack0x0000b458,&stack0x0000b480,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x36,&stack0x0000b458);
        in_stack_00000928[0x448] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000928[0x447] = *(undefined8 *)in_stack_00000928[0x448];
        memcpy(&stack0x0000a940,&stack0x00035470,0xb08);
        memcpy(&stack0x0000a918,&stack0x0000b1f0,0x28);
        NullCheck((void *)in_stack_00000928[0x447]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000928[0x447];
        memcpy(&stack0x0000a8f0,&stack0x0000a918,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x37,&stack0x0000a8f0);
        in_stack_00000928[0x2db] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000928[0x2da] = *(undefined8 *)in_stack_00000928[0x2db];
        memcpy(&stack0x00009dd8,&stack0x00035470,0xb08);
        memcpy(&stack0x00009db0,&stack0x0000a6b0,0x28);
        NullCheck((void *)in_stack_00000928[0x2da]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000928[0x2da];
        memcpy(&stack0x00009d88,&stack0x00009db0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x38,&stack0x00009d88);
        in_stack_00000928[0x16e] = *(undefined8 *)(in_stack_000008e8 + 8);
        in_stack_00000928[0x16d] = *(undefined8 *)in_stack_00000928[0x16e];
        memcpy(&stack0x00009270,&stack0x00035470,0xb08);
        memcpy(&stack0x00009248,&stack0x00009b70,0x28);
        NullCheck((void *)in_stack_00000928[0x16d]);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 in_stack_00000928[0x16d];
        memcpy(&stack0x00009220,&stack0x00009248,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x39,&stack0x00009220);
        in_stack_00000928[1] = *(undefined8 *)(in_stack_000008e8 + 8);
        *in_stack_00000928 = *(undefined8 *)in_stack_00000928[1];
        memcpy(&stack0x00008708,&stack0x00035470,0xb08);
        memcpy(&stack0x000086e0,&stack0x00009030,0x28);
        NullCheck((void *)*in_stack_00000928);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 *in_stack_00000928;
        memcpy(&stack0x000086b8,&stack0x000086e0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x3a,&stack0x000086b8);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 **(undefined8 **)(in_stack_000008e8 + 8);
        memcpy(&stack0x00007ba0,&stack0x00035470,0xb08);
        memcpy(&stack0x00007b78,&stack0x000084f0,0x28);
        NullCheck(pBVar6);
        memcpy(&stack0x00007b50,&stack0x00007b78,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x3b,&stack0x00007b50);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 **(undefined8 **)(in_stack_000008e8 + 8);
        memcpy(&stack0x00007038,&stack0x00035470,0xb08);
        memcpy(&stack0x00007010,&stack0x000079b0,0x28);
        NullCheck(pBVar6);
        memcpy(&stack0x00006fe8,&stack0x00007010,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x3c,&stack0x00006fe8);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 **(undefined8 **)(in_stack_000008e8 + 8);
        memcpy(&stack0x000064d0,&stack0x00035470,0xb08);
        memcpy(&stack0x000064a8,&stack0x00006e70,0x28);
        NullCheck(pBVar6);
        memcpy(&stack0x00006480,&stack0x000064a8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x3d,&stack0x00006480);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 **(undefined8 **)(in_stack_000008e8 + 8);
        memcpy(&stack0x00005968,&stack0x00035470,0xb08);
        memcpy(&stack0x00005940,&stack0x00006330,0x28);
        NullCheck(pBVar6);
        memcpy(&stack0x00005918,&stack0x00005940,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x3e,&stack0x00005918);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 **(undefined8 **)(in_stack_000008e8 + 8);
        memcpy(&stack0x00004e00,&stack0x00035470,0xb08);
        memcpy(&stack0x00004dd8,&stack0x000057f0,0x28);
        NullCheck(pBVar6);
        memcpy(&stack0x00004db0,&stack0x00004dd8,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x3f,&stack0x00004db0);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 **(undefined8 **)(in_stack_000008e8 + 8);
        memcpy(&stack0x00004298,&stack0x00035470,0xb08);
        memcpy(&stack0x00004270,&stack0x00004cb0,0x28);
        NullCheck(pBVar6);
        memcpy(&stack0x00004248,&stack0x00004270,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x40,&stack0x00004248);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 **(undefined8 **)(in_stack_000008e8 + 8);
        memcpy(&stack0x00003730,&stack0x00035470,0xb08);
        memcpy(&stack0x00003708,&stack0x00004170,0x28);
        NullCheck(pBVar6);
        memcpy(&stack0x000036e0,&stack0x00003708,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x41,&stack0x000036e0);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 **(undefined8 **)(in_stack_000008e8 + 8);
        memcpy(&stack0x00002bc8,&stack0x00035470,0xb08);
        memcpy(&stack0x00002ba0,&stack0x00003630,0x28);
        NullCheck(pBVar6);
        memcpy(&stack0x00002b78,&stack0x00002ba0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x42,&stack0x00002b78);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 **(undefined8 **)(in_stack_000008e8 + 8);
        memcpy(&stack0x00002060,&stack0x00035470,0xb08);
        memcpy(&stack0x00002038,&stack0x00002af0,0x28);
        NullCheck(pBVar6);
        memcpy(&stack0x00002010,&stack0x00002038,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x43,&stack0x00002010);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 **(undefined8 **)(in_stack_000008e8 + 8);
        memcpy(&stack0x000014f8,&stack0x00035470,0xb08);
        memcpy(&stack0x000014d0,&stack0x00001fb0,0x28);
        NullCheck(pBVar6);
        memcpy(&stack0x000014a8,&stack0x000014d0,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x44,&stack0x000014a8);
        pBVar6 = (BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4 *)
                 **(undefined8 **)(in_stack_000008e8 + 8);
        memcpy(&stack0x00000990,&stack0x00035470,0xb08);
        memcpy(&stack0x00000968,&stack0x00001470,0x28);
        NullCheck(pBVar6);
        memcpy(&stack0x00000940,&stack0x00000968,0x28);
        BodyJointLocationU5BU5D_t6BDB837D3008B84A1B214110BD16F424D5E558A4::SetAt
                  (pBVar6,0x45,&stack0x00000940);
        *(undefined1 *)(in_stack_000008e8 + 0x17) = 1;
      }
      else {
        *(undefined1 *)(in_stack_000008e8 + 0x17) = 0;
      }
    }
    else {
      *(undefined1 *)(in_stack_000008e8 + 0x17) = 0;
    }
  }
  else {
    *(undefined1 *)(in_stack_000008e8 + 0x17) = 0;
  }
  return *(byte *)(in_stack_000008e8 + 0x17) & 1;
}


