/*
FUNCTION_NAME: FUN_0595af18
ENTRY_POINT: 0595af18
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_0595af18(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if ((DAT_066d375c & 1) == 0) {
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<ContactPairHeader>_AsReadOnly__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<XmlSchema>__ctor__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<GravityOverride>__ctor__);
    FUN_02b3c81c(Method_Pico_Platform_Task<SessionMedia>__ctor__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<XmlNode>_Add__);
    DAT_066d375c = 1;
  }
  if (param_3 == 0) goto LAB_0595b580;
  lVar10 = *(long *)(param_3 + 0x18);
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<XmlSchema>__ctor__ + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar5 = Method_System_Collections_Generic_List<XmlNode>_Add__;
  if ((lVar10 == 0) || (param_2 == 0)) goto LAB_0595b580;
  cVar3 = *(char *)(param_2 + 0x10);
  uVar11 = *(undefined8 *)(lVar10 + 0x10);
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<XmlNode>_Add__ + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066d2bb0 == '\0') {
    FUN_02b3c81c(PTR_DAT_06322b80);
    DAT_066d2bb0 = '\x01';
  }
  puVar4 = PTR_DAT_06322b80;
  if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066d2bb1 == '\0') {
    FUN_02b3c81c(PTR_DAT_06322b80);
    DAT_066d2bb1 = '\x01';
  }
  iVar9 = (uint)*(ushort *)(param_2 + 0x26) << 0x10;
  if (*(ushort *)(param_2 + 0x26) != 0) {
    lVar10 = *(long *)puVar4;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar10 = *(long *)puVar4;
    }
    piVar8 = *(int **)(lVar10 + 0xb8);
    if (iVar9 != *piVar8) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        piVar8 = *(int **)(*(long *)puVar4 + 0xb8);
      }
      if (iVar9 != piVar8[1]) goto LAB_0595b0b4;
    }
    uVar12 = *(undefined8 *)(param_2 + 0x24);
    uVar14 = *(undefined8 *)(param_2 + 0x2c);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar12 = FUN_0589c1c8(uVar12,uVar14,0);
    FUN_059521b4(uVar11,uVar12);
  }
LAB_0595b0b4:
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066d2bb0 == '\0') {
    FUN_02b3c81c(PTR_DAT_06322b80);
    DAT_066d2bb0 = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066d2bb1 == '\0') {
    FUN_02b3c81c(PTR_DAT_06322b80);
    DAT_066d2bb1 = '\x01';
  }
  iVar9 = (uint)*(ushort *)(param_2 + 0x66) << 0x10;
  if (*(ushort *)(param_2 + 0x66) != 0) {
    lVar10 = *(long *)puVar4;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar10 = *(long *)puVar4;
    }
    piVar8 = *(int **)(lVar10 + 0xb8);
    if (iVar9 != *piVar8) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        piVar8 = *(int **)(*(long *)puVar4 + 0xb8);
      }
      if (iVar9 != piVar8[1]) goto LAB_0595b1c8;
    }
    puVar4 = Method_UnityEngine_Events_UnityEvent<GravityOverride>__ctor__;
    lVar13 = *(long *)(param_2 + 0x18);
    lVar10 = *(long *)Method_UnityEngine_Events_UnityEvent<GravityOverride>__ctor__;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar10 = *(long *)puVar4;
    }
    uVar12 = *(undefined8 *)(param_2 + 100);
    uVar14 = *(undefined8 *)(param_2 + 0x6c);
    uVar2 = *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x30);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar5);
    }
    uVar12 = FUN_0589bed0(uVar12,uVar14,0);
    if (lVar13 == 0) goto LAB_0595b580;
    thunk_FUN_05c5bc88(lVar13,uVar2,uVar12,0);
  }
LAB_0595b1c8:
  puVar4 = Method_Unity_Collections_NativeArray<ContactPairHeader>_AsReadOnly__;
  uVar12 = *(undefined8 *)(param_2 + 0x34);
  uVar14 = *(undefined8 *)(param_2 + 0x3c);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar12 = FUN_0589c1c8(uVar12,uVar14,0);
  uVar14 = FUN_0589c1c8(*(undefined8 *)(param_2 + 0x34),*(undefined8 *)(param_2 + 0x3c),0);
  uVar15 = *(undefined8 *)(param_2 + 0x18);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)puVar4);
  }
  FUN_05866144(uVar11,uVar12,uVar14,2,0,uVar15,0,0);
  iVar9 = *(int *)(param_2 + 0x14);
  if (iVar9 == 2) {
    uVar12 = *(undefined8 *)(param_2 + 0x34);
    uVar14 = *(undefined8 *)(param_2 + 0x3c);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar12 = FUN_0589c1c8(uVar12,uVar14,0);
    uVar14 = FUN_0589c1c8(*(undefined8 *)(param_2 + 0x44),*(undefined8 *)(param_2 + 0x4c),0);
    uVar15 = *(undefined8 *)(param_2 + 0x18);
    iVar9 = *(int *)(*(long *)puVar4 + 0xe4);
    bVar6 = *(char *)(param_2 + 0x10) == '\0';
    iVar7 = 8;
  }
  else if (iVar9 == 1) {
    uVar12 = *(undefined8 *)(param_2 + 0x34);
    uVar14 = *(undefined8 *)(param_2 + 0x3c);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar12 = FUN_0589c1c8(uVar12,uVar14,0);
    uVar14 = FUN_0589c1c8(*(undefined8 *)(param_2 + 0x54),*(undefined8 *)(param_2 + 0x5c),0);
    uVar15 = *(undefined8 *)(param_2 + 0x18);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar4);
    }
    FUN_05866144(uVar11,uVar12,uVar14,0,0,uVar15,5,0);
    uVar12 = FUN_0589c1c8(*(undefined8 *)(param_2 + 0x54),*(undefined8 *)(param_2 + 0x5c),0);
    uVar14 = FUN_0589c1c8(*(undefined8 *)(param_2 + 0x44),*(undefined8 *)(param_2 + 0x4c),0);
    uVar15 = *(undefined8 *)(param_2 + 0x18);
    iVar9 = *(int *)(*(long *)puVar4 + 0xe4);
    bVar6 = *(char *)(param_2 + 0x10) == '\0';
    iVar7 = 6;
  }
  else {
    if (iVar9 != 0) {
      thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
      uVar11 = thunk_FUN_02b79644();
      FUN_04cf6044(uVar11,0);
      uVar12 = thunk_FUN_02ba3594(
                                 Method_UnityEngine_UIElements_VisualElement_VisualElementScheduledItem<Action>__ctor__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar11,uVar12);
    }
    uVar12 = *(undefined8 *)(param_2 + 0x34);
    uVar14 = *(undefined8 *)(param_2 + 0x3c);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar12 = FUN_0589c1c8(uVar12,uVar14,0);
    uVar14 = FUN_0589c1c8(*(undefined8 *)(param_2 + 0x54),*(undefined8 *)(param_2 + 0x5c),0);
    uVar15 = *(undefined8 *)(param_2 + 0x18);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar4);
    }
    FUN_05866144(uVar11,uVar12,uVar14,2,0,uVar15,1,0);
    uVar12 = FUN_0589c1c8(*(undefined8 *)(param_2 + 0x54),*(undefined8 *)(param_2 + 0x5c),0);
    uVar14 = FUN_0589c1c8(*(undefined8 *)(param_2 + 0x34),*(undefined8 *)(param_2 + 0x3c),0);
    FUN_05866144(uVar11,uVar12,uVar14,2,0,*(undefined8 *)(param_2 + 0x18),2,0);
    uVar12 = FUN_0589c1c8(*(undefined8 *)(param_2 + 0x34),*(undefined8 *)(param_2 + 0x3c),0);
    uVar14 = FUN_0589c1c8(*(undefined8 *)(param_2 + 0x44),*(undefined8 *)(param_2 + 0x4c),0);
    uVar15 = *(undefined8 *)(param_2 + 0x18);
    iVar9 = *(int *)(*(long *)puVar4 + 0xe4);
    bVar6 = *(char *)(param_2 + 0x10) == '\0';
    iVar7 = 3;
  }
  iVar1 = iVar7;
  if (!bVar6) {
    iVar1 = iVar7 + 1;
  }
  if (iVar9 == 0) {
    thunk_FUN_02b9ad44(iVar7);
  }
  FUN_05866144(uVar11,uVar12,uVar14,(ulong)(cVar3 == '\0') << 1,0,uVar15,iVar1,0);
  if (*(char *)(param_2 + 0x10) != '\0') {
    return;
  }
  if (*(long *)(param_3 + 0x18) != 0) {
    FUN_057f9564(*(long *)(param_3 + 0x18),
                 *(long *)(*(long *)Method_Pico_Platform_Task<SessionMedia>__ctor__ + 0xb8) + 0x88,1
                 ,0);
    puVar5 = Method_UnityEngine_Events_UnityEvent<GravityOverride>__ctor__;
    lVar10 = *(long *)(param_3 + 0x18);
    if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<GravityOverride>__ctor__ + 0xe4) == 0
       ) {
      thunk_FUN_02b9ad44();
    }
    if (lVar10 != 0) {
      FUN_057f9438(0x3f800000,0,0,*(undefined4 *)(param_2 + 0x20),lVar10,
                   **(undefined4 **)(*(long *)puVar5 + 0xb8),0);
      return;
    }
  }
LAB_0595b580:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


