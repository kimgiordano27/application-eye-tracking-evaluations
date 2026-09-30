/*
FUNCTION_NAME: FUN_072e6430
ENTRY_POINT: 072e6430
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_10
*/


void FUN_072e6430(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar11 = UnityEngine_Rendering_AsyncGPUReadbackRequest_TypeInfo;
  puVar10 = System_AsyncCallback_TypeInfo;
  puVar6 = System_Security_Cryptography_AsymmetricAlgorithm_TypeInfo;
  puVar5 = System_Xml_Schema_Asttree_TypeInfo;
  puVar4 = System_Linq_Expressions_Interpreter_AssignLocalToClosureInstruction_TypeInfo;
  puVar3 = System_Linq_Expressions_Interpreter_AssignLocalInstruction_TypeInfo;
  puVar9 = System_Linq_Expressions_Interpreter_AssignLocalBoxedInstruction_TypeInfo;
  puVar8 = PTR_DAT_07d98090;
  puVar7 = PTR_DAT_07d98088;
  if ((DAT_08268bf1 & 1) == 0) {
    FUN_0373b518(Mono_Net_Security_AsyncHandshakeRequest_TypeInfo);
    FUN_0373b518(PTR_DAT_07da1bc8);
    FUN_0373b518(PTR_DAT_07d98088);
    FUN_0373b518(System_Linq_Expressions_Interpreter_AssignLocalInstruction_TypeInfo);
    FUN_0373b518(System_Linq_Expressions_Interpreter_AssignLocalBoxedInstruction_TypeInfo);
    FUN_0373b518(PTR_DAT_07da1bc0);
    FUN_0373b518(PTR_DAT_07d97940);
    FUN_0373b518(System_Xml_AsyncHelper_TypeInfo);
    FUN_0373b518(PTR_DAT_07d98090);
    FUN_0373b518(PTR_DAT_07d9ec68);
    FUN_0373b518(PTR_DAT_07d9ec70);
    FUN_0373b518(PTR_DAT_07d9ec78);
    FUN_0373b518(PTR_DAT_07db4658);
    FUN_0373b518(PTR_DAT_07d97978);
    FUN_0373b518(PTR_DAT_07d97990);
    FUN_0373b518(UnityEngine_AsyncOperation_TypeInfo);
    FUN_0373b518(Mono_Net_Security_AsyncProtocolResult_TypeInfo);
    FUN_0373b518(PTR_DAT_07d9ec88);
    FUN_0373b518(System_AsyncCallback_TypeInfo);
    FUN_0373b518(Mono_Net_Security_AsyncReadRequest_TypeInfo);
    FUN_0373b518(System_Runtime_Remoting_Channels_AsyncRequest_TypeInfo);
    FUN_0373b518(System_Security_Cryptography_AsymmetricAlgorithm_TypeInfo);
    FUN_0373b518(PTR_DAT_07d979a8);
    FUN_0373b518(System_Runtime_Remoting_Messaging_AsyncResult_TypeInfo);
    FUN_0373b518(System_Runtime_CompilerServices_AsyncTaskCache_TypeInfo);
    FUN_0373b518(System_Collections_Generic_IEnumerable<Vector3>_TypeInfo);
    FUN_0373b518(System_Runtime_CompilerServices_AsyncTaskMethodBuilder_TypeInfo);
    FUN_0373b518(Mono_Security_ASN1_TypeInfo);
    FUN_0373b518(System_Linq_Expressions_Interpreter_AssignLocalToClosureInstruction_TypeInfo);
    FUN_0373b518(Newtonsoft_Json_Utilities_AsyncUtils_TypeInfo);
    FUN_0373b518(Mono_Net_Security_AsyncWriteRequest_TypeInfo);
    FUN_0373b518(UnityEngine_Rendering_AtlasAllocator_TypeInfo);
    FUN_0373b518(DigitalOpus_MB_Core_AtlasPackingResult_TypeInfo);
    FUN_0373b518(DigitalOpus_MB_Core_AtlasPadding_TypeInfo);
    FUN_0373b518(UnityEngine_XR_Interaction_Toolkit_Attachment_AttachPointVelocityTracker_TypeInfo);
    FUN_0373b518(System_Xml_Schema_Asttree_TypeInfo);
    FUN_0373b518(UnityEngine_Rendering_AsyncGPUReadbackRequest_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_AttachToPanelEvent_TypeInfo);
    FUN_0373b518(UnityEngine_Rendering_AttachmentDescriptor_TypeInfo);
    FUN_0373b518(UnityEngine_Rendering_AttachmentIndexArray_TypeInfo);
    FUN_0373b518(AttackWheel_TypeInfo);
    FUN_0373b518(UnityEngine_InputSystem_AttitudeSensor_TypeInfo);
    FUN_0373b518(System_Attribute_TypeInfo);
    DAT_08268bf1 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_062855bc(param_1,0);
  uVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
  FUN_05b0e950(uVar13,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x40) = uVar13;
  thunk_FUN_037aeb94((undefined8 *)(param_1 + 0x40),uVar13);
  uVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
  FUN_05b0e950(uVar13,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x48) = uVar13;
  thunk_FUN_037aeb94((undefined8 *)(param_1 + 0x48),uVar13);
  uVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar8);
  FUN_05b0e950(uVar13,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x50) = uVar13;
  thunk_FUN_037aeb94((undefined8 *)(param_1 + 0x50),uVar13);
  uVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar4);
  FUN_072e7250();
  *(undefined8 *)(param_1 + 0x28) = uVar13;
  thunk_FUN_037aeb94((undefined8 *)(param_1 + 0x28),uVar13);
  uVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar5);
  FUN_072e7360();
  *(undefined8 *)(param_1 + 0x30) = uVar13;
  thunk_FUN_037aeb94((undefined8 *)(param_1 + 0x30),uVar13);
  lVar14 = thunk_FUN_037788cc(*(undefined8 *)puVar6);
  FUN_049ce6c0(lVar14,*(undefined8 *)puVar10);
  lVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar11);
  FUN_072d88a0(lVar15,0);
  if (lVar15 != 0) {
    *(long *)(lVar15 + 0x10) = param_1;
    thunk_FUN_037aeb94((long *)(lVar15 + 0x10),param_1);
    puVar7 = UnityEngine_AsyncOperation_TypeInfo;
    if (lVar14 != 0) {
      lVar20 = *(long *)(lVar14 + 0x10);
      lVar21 = *(long *)UnityEngine_AsyncOperation_TypeInfo;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      puVar8 = DigitalOpus_MB_Core_AtlasPackingResult_TypeInfo;
      if (lVar20 != 0) {
        uVar2 = *(uint *)(lVar14 + 0x18);
        if (uVar2 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
          plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
          *plVar16 = lVar15;
          thunk_FUN_037aeb94(plVar16,lVar15);
        }
        else {
          FUN_049ceef4(lVar14,lVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
        }
        lVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar8);
        FUN_072d710c(lVar15,0);
        if (lVar15 != 0) {
          *(long *)(lVar15 + 0x10) = param_1;
          thunk_FUN_037aeb94((long *)(lVar15 + 0x10),param_1);
          lVar20 = *(long *)(lVar14 + 0x10);
          lVar21 = *(long *)puVar7;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          puVar8 = UnityEngine_InputSystem_AttitudeSensor_TypeInfo;
          if (lVar20 != 0) {
            uVar2 = *(uint *)(lVar14 + 0x18);
            if (uVar2 < *(uint *)(lVar20 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar2 + 1;
              plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
              *plVar16 = lVar15;
              thunk_FUN_037aeb94(plVar16,lVar15);
            }
            else {
              FUN_049ceef4(lVar14,lVar15,
                           *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
            lVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar8);
            FUN_072da3f8(lVar15,0);
            if (lVar15 != 0) {
              *(long *)(lVar15 + 0x10) = param_1;
              thunk_FUN_037aeb94((long *)(lVar15 + 0x10),param_1);
              lVar20 = *(long *)(lVar14 + 0x10);
              lVar21 = *(long *)puVar7;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              puVar8 = Newtonsoft_Json_Utilities_AsyncUtils_TypeInfo;
              if (lVar20 != 0) {
                uVar2 = *(uint *)(lVar14 + 0x18);
                if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                  *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                  plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                  *plVar16 = lVar15;
                  thunk_FUN_037aeb94(plVar16,lVar15);
                }
                else {
                  FUN_049ceef4(lVar14,lVar15,
                               *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                }
                lVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar8);
                FUN_072d3af8(lVar15,0);
                if (lVar15 != 0) {
                  *(long *)(lVar15 + 0x10) = param_1;
                  thunk_FUN_037aeb94((long *)(lVar15 + 0x10),param_1);
                  lVar20 = *(long *)(lVar14 + 0x10);
                  lVar21 = *(long *)puVar7;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  puVar8 = UnityEngine_Rendering_AtlasAllocator_TypeInfo;
                  if (lVar20 != 0) {
                    uVar2 = *(uint *)(lVar14 + 0x18);
                    if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                      plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                      *plVar16 = lVar15;
                      thunk_FUN_037aeb94(plVar16,lVar15);
                    }
                    else {
                      FUN_049ceef4(lVar14,lVar15,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar8);
                    FUN_072d6668(lVar15,0);
                    if (lVar15 != 0) {
                      *(long *)(lVar15 + 0x10) = param_1;
                      thunk_FUN_037aeb94((long *)(lVar15 + 0x10),param_1);
                      lVar20 = *(long *)(lVar14 + 0x10);
                      lVar21 = *(long *)puVar7;
                      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                      puVar8 = UnityEngine_UIElements_AttachToPanelEvent_TypeInfo;
                      if (lVar20 != 0) {
                        uVar2 = *(uint *)(lVar14 + 0x18);
                        if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                          plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                          *plVar16 = lVar15;
                          thunk_FUN_037aeb94(plVar16,lVar15);
                        }
                        else {
                          FUN_049ceef4(lVar14,lVar15,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar8);
                        FUN_072d9b18(lVar15,0);
                        if (lVar15 != 0) {
                          *(long *)(lVar15 + 0x10) = param_1;
                          thunk_FUN_037aeb94((long *)(lVar15 + 0x10),param_1);
                          lVar20 = *(long *)(lVar14 + 0x10);
                          lVar21 = *(long *)puVar7;
                          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                          puVar8 = System_Runtime_Remoting_Messaging_AsyncResult_TypeInfo;
                          if (lVar20 != 0) {
                            uVar2 = *(uint *)(lVar14 + 0x18);
                            if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                              *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                              plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                              *plVar16 = lVar15;
                              thunk_FUN_037aeb94(plVar16,lVar15);
                            }
                            else {
                              FUN_049ceef4(lVar14,lVar15,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar8);
                            FUN_072d2e78(lVar15,0);
                            if (lVar15 != 0) {
                              *(long *)(lVar15 + 0x10) = param_1;
                              thunk_FUN_037aeb94((long *)(lVar15 + 0x10),param_1);
                              lVar20 = *(long *)(lVar14 + 0x10);
                              lVar21 = *(long *)puVar7;
                              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                              puVar8 = Mono_Net_Security_AsyncWriteRequest_TypeInfo;
                              if (lVar20 != 0) {
                                uVar2 = *(uint *)(lVar14 + 0x18);
                                if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                  *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                  plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                                  *plVar16 = lVar15;
                                  thunk_FUN_037aeb94(plVar16,lVar15);
                                }
                                else {
                                  FUN_049ceef4(lVar14,lVar15,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                lVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar8);
                                FUN_072d5718(lVar15,0);
                                if (lVar15 != 0) {
                                  *(long *)(lVar15 + 0x10) = param_1;
                                  thunk_FUN_037aeb94((long *)(lVar15 + 0x10),param_1);
                                  lVar20 = *(long *)(lVar14 + 0x10);
                                  lVar21 = *(long *)puVar7;
                                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                  puVar8 = DigitalOpus_MB_Core_AtlasPadding_TypeInfo;
                                  if (lVar20 != 0) {
                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                    if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                      plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                                      *plVar16 = lVar15;
                                      thunk_FUN_037aeb94(plVar16,lVar15);
                                    }
                                    else {
                                      FUN_049ceef4(lVar14,lVar15,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    lVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar8);
                                    FUN_072d8000(lVar15,0);
                                    if (lVar15 != 0) {
                                      *(long *)(lVar15 + 0x10) = param_1;
                                      thunk_FUN_037aeb94((long *)(lVar15 + 0x10),param_1);
                                      lVar20 = *(long *)(lVar14 + 0x10);
                                      lVar21 = *(long *)puVar7;
                                      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                      puVar8 = 
                                      UnityEngine_XR_Interaction_Toolkit_Attachment_AttachPointVelocityTracker_TypeInfo
                                      ;
                                      if (lVar20 != 0) {
                                        uVar2 = *(uint *)(lVar14 + 0x18);
                                        if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                          plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                                          *plVar16 = lVar15;
                                          thunk_FUN_037aeb94(plVar16,lVar15);
                                        }
                                        else {
                                          FUN_049ceef4(lVar14,lVar15,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        lVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar8);
                                        FUN_072d8710(lVar15,0);
                                        if (lVar15 != 0) {
                                          *(long *)(lVar15 + 0x10) = param_1;
                                          thunk_FUN_037aeb94((long *)(lVar15 + 0x10),param_1);
                                          lVar20 = *(long *)(lVar14 + 0x10);
                                          lVar21 = *(long *)puVar7;
                                          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                          puVar8 = System_Attribute_TypeInfo;
                                          if (lVar20 != 0) {
                                            uVar2 = *(uint *)(lVar14 + 0x18);
                                            if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                              *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                              plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 +
                                                                0x20);
                                              *plVar16 = lVar15;
                                              thunk_FUN_037aeb94(plVar16,lVar15);
                                            }
                                            else {
                                              FUN_049ceef4(lVar14,lVar15,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar21 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar8);
                                            FUN_072daa08(lVar15,0);
                                            if (lVar15 != 0) {
                                              *(long *)(lVar15 + 0x10) = param_1;
                                              thunk_FUN_037aeb94((long *)(lVar15 + 0x10),param_1);
                                              lVar20 = *(long *)(lVar14 + 0x10);
                                              lVar21 = *(long *)puVar7;
                                              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                              puVar8 = 
                                              UnityEngine_Rendering_AttachmentDescriptor_TypeInfo;
                                              if (lVar20 != 0) {
                                                uVar2 = *(uint *)(lVar14 + 0x18);
                                                if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                                  *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                  plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 +
                                                                    0x20);
                                                  *plVar16 = lVar15;
                                                  thunk_FUN_037aeb94(plVar16,lVar15);
                                                }
                                                else {
                                                  FUN_049ceef4(lVar14,lVar15,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar21 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                lVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar8);
                                                FUN_072da0b8(lVar15,0);
                                                if (lVar15 != 0) {
                                                  *(long *)(lVar15 + 0x10) = param_1;
                                                  thunk_FUN_037aeb94((long *)(lVar15 + 0x10),param_1
                                                                    );
                                                  lVar20 = *(long *)(lVar14 + 0x10);
                                                  lVar21 = *(long *)puVar7;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  puVar4 = 
                                                  UnityEngine_Rendering_AttachmentIndexArray_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  System_Runtime_Remoting_Channels_AsyncRequest_TypeInfo
                                                  ;
                                                  puVar9 = 
                                                  Mono_Net_Security_AsyncReadRequest_TypeInfo;
                                                  puVar8 = System_Xml_AsyncHelper_TypeInfo;
                                                  puVar7 = 
                                                  Mono_Net_Security_AsyncHandshakeRequest_TypeInfo;
                                                  if (lVar20 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      plVar16 = (long *)(lVar20 + (long)(int)uVar2 *
                                                                                  8 + 0x20);
                                                      *plVar16 = lVar15;
                                                      thunk_FUN_037aeb94(plVar16,lVar15);
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar14,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar21 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(param_1 + 0x10) = lVar14;
                                                  thunk_FUN_037aeb94((long *)(param_1 + 0x10),lVar14
                                                                    );
                                                  uVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_05b0e950(uVar13,*(undefined8 *)puVar7);
                                                  *(undefined8 *)(param_1 + 0x18) = uVar13;
                                                  thunk_FUN_037aeb94((undefined8 *)(param_1 + 0x18),
                                                                     uVar13);
                                                  lVar14 = thunk_FUN_037788cc(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_049ce6c0(lVar14,*(undefined8 *)puVar9);
                                                  uVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_072e2114(uVar13,0);
                                                  puVar7 = 
                                                  Mono_Net_Security_AsyncProtocolResult_TypeInfo;
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar20 = *(long *)
                                                  Mono_Net_Security_AsyncProtocolResult_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  puVar8 = AttackWheel_TypeInfo;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      puVar17 = (undefined8 *)
                                                                (lVar15 + (long)(int)uVar2 * 8 +
                                                                0x20);
                                                      *puVar17 = uVar13;
                                                      thunk_FUN_037aeb94(puVar17,uVar13);
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar16 = (long *)(param_1 + 0x20);
                                                  *plVar16 = lVar14;
                                                  thunk_FUN_037aeb94(plVar16,lVar14);
                                                  lVar14 = *plVar16;
                                                  uVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_072e23f8(uVar13,0);
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar20 = *(long *)puVar7;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    puVar9 = PTR_DAT_07db4658;
                                                    puVar8 = PTR_DAT_07da1bc8;
                                                    puVar7 = PTR_DAT_07da1bc0;
                                                    if (lVar15 != 0) {
                                                      uVar2 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                        puVar17 = (undefined8 *)
                                                                  (lVar15 + (long)(int)uVar2 * 8 +
                                                                  0x20);
                                                        *puVar17 = uVar13;
                                                        thunk_FUN_037aeb94(puVar17,uVar13);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar14,uVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar12 = 
                                                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_TypeInfo
                                                  ;
                                                  puVar11 = Mono_Security_ASN1_TypeInfo;
                                                  puVar10 = 
                                                  System_Collections_Generic_IEnumerable<Vector3>_TypeInfo
                                                  ;
                                                  puVar6 = PTR_DAT_07d979a8;
                                                  puVar5 = PTR_DAT_07d97990;
                                                  puVar4 = PTR_DAT_07d97978;
                                                  puVar3 = PTR_DAT_07d97940;
                                                  uVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05b0e950(uVar13,*(undefined8 *)puVar8);
                                                  *(undefined8 *)(param_1 + 0x38) = uVar13;
                                                  thunk_FUN_037aeb94((undefined8 *)(param_1 + 0x38),
                                                                     uVar13);
                                                  uVar13 = *(undefined8 *)puVar9;
                                                  if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) +
                                                              0xe4) == 0) {
                                                    thunk_FUN_03798b70();
                                                  }
                                                  uVar13 = FUN_062519f8(uVar13,0);
                                                  uVar18 = FUN_062519f8(*(undefined8 *)puVar6,0);
                                                  FUN_072e743c(param_1,uVar13,uVar18);
                                                  uVar13 = FUN_062519f8(*(undefined8 *)puVar5,0);
                                                  uVar18 = FUN_062519f8(*(undefined8 *)puVar6,0);
                                                  FUN_072e743c(param_1,uVar13,uVar18);
                                                  uVar13 = FUN_062519f8(*(undefined8 *)puVar4,0);
                                                  uVar18 = FUN_062519f8(*(undefined8 *)puVar3,0);
                                                  FUN_072e743c(param_1,uVar13,uVar18);
                                                  uVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar12
                                                                             );
                                                  FUN_072e0d7c(uVar13,0);
                                                  *(undefined8 *)(param_1 + 0x58) = uVar13;
                                                  thunk_FUN_037aeb94((undefined8 *)(param_1 + 0x58),
                                                                     uVar13);
                                                  uVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar10
                                                                             );
                                                  FUN_072e08b8(uVar13,0);
                                                  *(undefined8 *)(param_1 + 0x60) = uVar13;
                                                  thunk_FUN_037aeb94((undefined8 *)(param_1 + 0x60),
                                                                     uVar13);
                                                  lVar14 = *(long *)puVar11;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_03798b70();
                                                    lVar14 = *(long *)puVar11;
                                                  }
                                                  puVar9 = 
                                                  System_Runtime_CompilerServices_AsyncTaskCache_TypeInfo
                                                  ;
                                                  puVar8 = PTR_DAT_07d9ec70;
                                                  puVar7 = PTR_DAT_07d9ec68;
                                                  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x50
                                                                    );
                                                  if (lVar14 != 0) {
                                                    FUN_049cf910(&local_78,lVar14,
                                                                 *(undefined8 *)PTR_DAT_07d9ec88);
                                                    do {
                                                      uVar19 = FUN_05d64e98(&local_78,
                                                                            *(undefined8 *)puVar8);
                                                      if ((uVar19 & 1) == 0) {
                                                        FUN_05d64e94(&local_78,*(undefined8 *)puVar7
                                                                    );
                                                        return;
                                                      }
                                                      plVar16 = (long *)FUN_0626d700(local_68,0);
                                                      if (plVar16 != (long *)0x0) {
                                                        bVar1 = *(byte *)(*(long *)puVar9 + 0x130);
                                                        if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
                                                           (*(long *)(*(long *)(*plVar16 + 200) +
                                                                      (ulong)bVar1 * 8 + -8) !=
                                                            *(long *)puVar9)) {
                    /* WARNING: Subroutine does not return */
                                                          FUN_0373bb54(plVar16);
                                                        }
                                                      }
                                                      FUN_072e7544(param_1,plVar16);
                                                    } while( true );
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


