/*
FUNCTION_NAME: FUN_034f522c
ENTRY_POINT: 034f522c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_5
*/


void FUN_034f522c(undefined8 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar6;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_38;
  undefined *puVar5;
  
  puVar5 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  uStack_38 = param_1;
  if ((DAT_04832e6e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    DAT_04832e6e = 1;
  }
  local_48 = 0;
  local_4c = 0;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  iVar1 = FUN_0354dfec(&uStack_38,0);
  if (iVar1 == 0) {
    if (param_2 - 1U < 0xc) {
      if (param_4 - 1U < 0x1f) {
        if (param_3 - 1U < 5) {
          if (param_5 < 7) {
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            FUN_0354d278(&uStack_38,(long)&local_48 + 4,&local_48,&local_4c,0);
            if (((local_48._4_4_ == 1) && ((int)local_48 == 1)) && (local_4c == 1)) {
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              lVar2 = FUN_0354e060(&uStack_38,0);
              if ((lVar2 * -0x2d77318fc504816f + 0x346dc5d6388650U >> 4 |
                  lVar2 * -0x2d77318fc504816f << 0x3c) < 0x68db8bac710cb) {
                return;
              }
            }
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
            uVar3 = thunk_FUN_01f117cc();
            puVar5 = 
            Method_System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_GetMemberType__;
            goto LAB_034f53c8;
          }
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
          uVar3 = thunk_FUN_01f117cc();
          uVar4 = thunk_FUN_01efb3a4(Method_Mono_Security_X509_X509Certificate__ctor__);
          puVar5 = Method_Mono_Security_X509_X509Certificate_Parse__;
        }
        else {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
          uVar3 = thunk_FUN_01f117cc();
          uVar4 = thunk_FUN_01efb3a4(
                                    Method_System_Security_Cryptography_X509Certificates_X509BasicConstraintsExtension_get_HasPathLengthConstraint__
                                    );
          puVar5 = 
          Method_System_Security_Cryptography_X509Certificates_X509BasicConstraintsExtension_get_PathLengthConstraint__
          ;
        }
      }
      else {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar3 = thunk_FUN_01f117cc();
        uVar4 = thunk_FUN_01efb3a4(
                                  Method_System_Security_Cryptography_X509Certificates_X509BasicConstraintsExtension_CopyFrom__
                                  );
        puVar5 = 
        Method_System_Security_Cryptography_X509Certificates_X509BasicConstraintsExtension_get_CertificateAuthority__
        ;
      }
    }
    else {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar3 = thunk_FUN_01f117cc();
      uVar4 = thunk_FUN_01efb3a4(
                                Method_System_Security_Cryptography_X509Certificates_X500DistinguishedName_Decode__
                                );
      puVar5 = 
      Method_System_Security_Cryptography_X509Certificates_X509BasicConstraintsExtension__ctor__;
    }
    uVar6 = thunk_FUN_01efb3a4(puVar5);
    FUN_034f3578(uVar3,uVar4,uVar6);
  }
  else {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    puVar5 = Method_System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_InitSerialize__;
LAB_034f53c8:
    uVar4 = thunk_FUN_01efb3a4(puVar5);
    uVar6 = thunk_FUN_01efb3a4(
                              Method_System_Security_Cryptography_X509Certificates_X500DistinguishedName__ctor__
                              );
    FUN_034efd98(uVar3,uVar4,uVar6);
  }
  uVar4 = thunk_FUN_01efb3a4(Method_Mono_Security_X509_X509Certificate_VerifySignature__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar4);
}


