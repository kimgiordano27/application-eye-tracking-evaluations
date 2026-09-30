/*
FUNCTION_NAME: FUN_05e5f54c
ENTRY_POINT: 05e5f54c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05e5f54c(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long local_28;
  
  if ((DAT_06dc3b29 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Generic_List<RemoteLoopbackManagerBase_PacketData>_get_Count__
                );
    FUN_02d965b8(OVRPlugin_OVRP_1_128_0_TypeInfo);
    FUN_02d965b8(Mono_Security_PKCS7_SignedData_TypeInfo);
    FUN_02d965b8(
                Method_System_Collections_Generic_List<RemoteLoopbackManagerBase_PacketData>_get_Item__
                );
    FUN_02d965b8(Method_System_Collections_Generic_List<RichTextTagParser_ParseError>_Add__);
    FUN_02d965b8(Method_System_Collections_Generic_List<RichTextTagParser_Segment>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_List<RichTextTagParser_Segment>_Add__);
    FUN_02d965b8(PTR_DAT_06a1ac18);
    FUN_02d965b8(Method_System_Collections_Generic_List<RichTextTagParser_Segment>_ToArray__);
    DAT_06dc3b29 = 1;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x50) + 0x10) == '\0') {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(param_1 + 0xa0);
      *(long *)(param_1 + 0xa0) = lVar8 + 1;
    }
    puVar2 = 
    Method_System_Collections_Generic_List<RemoteLoopbackManagerBase_PacketData>_get_Count__;
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_04fff5d8(*(long *)(param_1 + 0x68),lVar8,param_2,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<RemoteLoopbackManagerBase_PacketData>_get_Count__
                  );
      if (*(long *)(param_1 + 0x70) != 0) {
        FUN_04fff5d8(*(long *)(param_1 + 0x70),param_2,lVar8,*(undefined8 *)puVar2);
        if (*(long *)(param_1 + 0x48) != 0) {
          FUN_05e93184(*(long *)(param_1 + 0x48),lVar8,0);
          if (*(long *)(param_1 + 0x50) != 0) {
            cVar1 = *(char *)(*(long *)(param_1 + 0x50) + 0x10);
            iVar3 = FUN_05e76758(0);
            if (cVar1 != '\0') {
              if (iVar3 < 1) {
                if (*(long *)(param_1 + 0x40) == 0) goto LAB_05e5f784;
                uVar4 = FUN_05e5fbc0();
                puVar7 = (undefined8 *)OVRPlugin_OVRP_1_128_0_TypeInfo;
                if ((uVar4 & 1) == 0) {
                  puVar7 = (undefined8 *)Mono_Security_PKCS7_SignedData_TypeInfo;
                }
                uVar9 = *puVar7;
                local_28 = lVar8;
                uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&local_28);
                uVar5 = FUN_0536e0dc(*(undefined8 *)
                                      Method_System_Collections_Generic_List<RichTextTagParser_Segment>_ToArray__
                                     ,uVar9,uVar5,0);
                FUN_05e76c9c(uVar5,0);
              }
              FUN_05e5ed8c(param_1,lVar8);
              return;
            }
            if (iVar3 < 1) {
              lVar6 = *(long *)(param_1 + 0x40);
              if (lVar6 == 0) goto LAB_05e5f784;
              puVar7 = (undefined8 *)
                       Method_System_Collections_Generic_List<RemoteLoopbackManagerBase_PacketData>_get_Item__
              ;
              if (*(char *)(lVar6 + 0x30) != '\0') {
                if (*(long *)(lVar6 + 0x90) == 0) goto LAB_05e5f784;
                puVar7 = (undefined8 *)
                         Method_System_Collections_Generic_List<RichTextTagParser_Segment>__ctor__;
                if (*(char *)(*(long *)(lVar6 + 0x90) + 0x6c) != '\0') {
                  puVar7 = (undefined8 *)PTR_DAT_06a1ac18;
                }
              }
              uVar5 = FUN_0536d554(*(undefined8 *)
                                    Method_System_Collections_Generic_List<RichTextTagParser_Segment>_Add__
                                   ,*puVar7,*(undefined8 *)
                                             Method_System_Collections_Generic_List<RichTextTagParser_ParseError>_Add__
                                   ,0);
              FUN_05e76c9c(uVar5,0);
            }
            FUN_05e5fbfc(param_1);
            FUN_05e5ec8c(param_1,lVar8);
            return;
          }
        }
      }
    }
  }
LAB_05e5f784:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


