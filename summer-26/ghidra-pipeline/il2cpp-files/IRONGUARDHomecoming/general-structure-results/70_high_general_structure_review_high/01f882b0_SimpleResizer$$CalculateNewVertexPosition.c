/*
FUNCTION_NAME: SimpleResizer$$CalculateNewVertexPosition
ENTRY_POINT: 01f882b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void SimpleResizer__CalculateNewVertexPosition(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  __shared_count *this;
  collate_byname<char> *this_00;
  collate_byname<wchar_t> *this_01;
  void *this_02;
  ctype_byname<wchar_t> *this_03;
  long *plVar3;
  codecvt<wchar_t,char,mbstate_t> *this_04;
  numpunct_byname<char> *this_05;
  numpunct_byname<wchar_t> *this_06;
  long in_x9;
  basic_string *pbVar4;
  ulong uVar5;
  long unaff_x19;
  uint unaff_w21;
  basic_string *unaff_x22;
  uint unaff_w23;
  
  while( true ) {
    uVar5 = (ulong)unaff_w23;
    unaff_w23 = unaff_w23 + 1;
    if ((ulong)(param_1 - in_x9 >> 3) <= uVar5) break;
    this = *(__shared_count **)(in_x9 + uVar5 * 8);
    if (this != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__add_shared(this);
      in_x9 = *(long *)(unaff_x19 + 0x10);
      param_1 = *(long *)(unaff_x19 + 0x18);
    }
  }
  if ((unaff_w21 >> 3 & 1) != 0) {
    this_00 = operator_new(0x18);
    std::__ndk1::collate_byname<char>::collate_byname(this_00,unaff_x22,0);
    FUN_01f86508();
    this_01 = operator_new(0x18);
    std::__ndk1::collate_byname<wchar_t>::collate_byname(this_01,unaff_x22,0);
    FUN_01f86634();
  }
  if ((unaff_w21 & 1) != 0) {
    this_02 = operator_new(0x28);
    StylusTip___ctor(this_02,unaff_x22,0);
    FUN_01f86760();
    this_03 = operator_new(0x18);
    std::__ndk1::ctype_byname<wchar_t>::ctype_byname(this_03,unaff_x22,0);
    FUN_01f8688c();
    plVar3 = operator_new(0x10);
    *plVar3 = (long)(PTR_Method_System_Collections_Generic_List<IGraph>_Clear___04594758 + 0x10);
    plVar3[1] = -1;
    FUN_01f869b8();
    this_04 = operator_new(0x18);
    pbVar4 = *(basic_string **)(unaff_x22 + 0x10);
    if (((byte)*unaff_x22 & 1) == 0) {
      pbVar4 = unaff_x22 + 1;
    }
    std::__ndk1::codecvt<wchar_t,char,mbstate_t>::codecvt(this_04,(char *)pbVar4,0);
    *(undefined **)this_04 =
         PTR_Method_System_Collections_Generic_List<IGraphDebugData>_Clear___04594760 + 0x10;
    FUN_01f86ae4();
    plVar3 = operator_new(0x10);
    *plVar3 = (long)(
                    PTR_Method_System_Collections_Generic_List<IGraphParent>_GetEnumerator___04594768
                    + 0x10);
    plVar3[1] = -1;
    FUN_01f86c10();
    plVar3 = operator_new(0x10);
    *plVar3 = (long)(PTR_Method_System_Collections_Generic_List<IGroupBoxOption>_Remove___04594770 +
                    0x10);
    plVar3[1] = -1;
    MyCustomSceneModelLoader__OnNoSceneModelToLoad();
  }
  if ((unaff_w21 >> 4 & 1) != 0) {
    operator_new(0x88);
    FUN_01f871ec();
    FUN_01f870c0();
    operator_new(0x88);
    FUN_01f873fc();
    FUN_01f872d0();
    operator_new(0x88);
    FUN_01f8760c();
    FUN_01f874e0();
    operator_new(0x88);
    FUN_01f8781c();
    FUN_01f876f0();
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    this_05 = operator_new(0x30);
    *(undefined8 *)(this_05 + 0x20) = 0;
    *(undefined8 *)(this_05 + 0x28) = 0;
    *(undefined8 *)(this_05 + 0x18) = 0;
    puVar1 = 
    PTR_Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_get_Identifier___04594778
    ;
    *(undefined2 *)(this_05 + 0x10) = 0x2c2e;
    *(undefined **)this_05 = puVar1 + 0x10;
    *(undefined8 *)(this_05 + 8) = 0xffffffffffffffff;
    pbVar4 = *(basic_string **)(unaff_x22 + 0x10);
    if (((byte)*unaff_x22 & 1) == 0) {
      pbVar4 = unaff_x22 + 1;
    }
    std::__ndk1::numpunct_byname<char>::__init(this_05,(char *)pbVar4);
    FUN_01f86e68();
    this_06 = operator_new(0x30);
    *(undefined8 *)(this_06 + 0x20) = 0;
    *(undefined8 *)(this_06 + 0x28) = 0;
    uVar2 = DAT_00c8de20;
    *(undefined8 *)(this_06 + 0x18) = 0;
    puVar1 = 
    PTR_Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenPostprocessed___04594780
    ;
    *(undefined8 *)(this_06 + 0x10) = uVar2;
    *(undefined **)this_06 = puVar1 + 0x10;
    *(undefined8 *)(this_06 + 8) = 0xffffffffffffffff;
    pbVar4 = unaff_x22 + 1;
    if (((byte)*unaff_x22 & 1) != 0) {
      pbVar4 = *(basic_string **)(unaff_x22 + 0x10);
    }
    std::__ndk1::numpunct_byname<wchar_t>::__init(this_06,(char *)pbVar4);
    FUN_01f86f94();
  }
  if ((unaff_w21 >> 2 & 1) != 0) {
    plVar3 = operator_new(0x440);
    puVar1 = PTR_Method_System_Collections_Generic_List<AudioClipData>_get_Count___045946f0 + 0x70;
    *plVar3 = (long)(PTR_Method_System_Collections_Generic_List<AudioClipData>_get_Count___045946f0
                    + 0x10);
    plVar3[1] = -1;
    plVar3[2] = (long)puVar1;
    std::__ndk1::__time_get_storage<char>::__time_get_storage
              ((__time_get_storage<char> *)(plVar3 + 3),unaff_x22);
    puVar1 = PTR_Method_System_Collections_Generic_List<BranchLabel>__ctor___04594788 + 0xa8;
    *plVar3 = (long)(PTR_Method_System_Collections_Generic_List<BranchLabel>__ctor___04594788 + 0x10
                    );
    plVar3[2] = (long)puVar1;
    FUN_01f87900();
    plVar3 = operator_new(0x440);
    puVar1 = PTR_Method_System_Collections_Generic_List<BezierControlPoint>_GetEnumerator___04594700
             + 0x70;
    *plVar3 = (long)(
                    PTR_Method_System_Collections_Generic_List<BezierControlPoint>_GetEnumerator___04594700
                    + 0x10);
    plVar3[1] = -1;
    plVar3[2] = (long)puVar1;
    std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage
              ((__time_get_storage<wchar_t> *)(plVar3 + 3),unaff_x22);
    puVar1 = PTR_Method_System_Collections_Generic_List<Character>_RemoveAt___04594790 + 0xa8;
    *plVar3 = (long)(PTR_Method_System_Collections_Generic_List<Character>_RemoveAt___04594790 +
                    0x10);
    plVar3[2] = (long)puVar1;
    FUN_01f87a2c();
    operator_new(0x18);
    FUN_01f87c84();
    FUN_01f87b58();
    operator_new(0x18);
    FUN_01f87e98();
    FUN_01f87d6c();
  }
  if ((unaff_w21 >> 5 & 1) != 0) {
    plVar3 = operator_new(0x10);
    *plVar3 = (long)(PTR_Method_System_Collections_Generic_List<IDrawGizmos>__ctor___04594798 + 0x10
                    );
    plVar3[1] = -1;
    FUN_01f87f80();
    plVar3 = operator_new(0x10);
    *plVar3 = (long)(PTR_Method_System_Collections_Generic_List<IEventHandler>_Add___045947a0 + 0x10
                    );
    plVar3[1] = -1;
    FUN_01f880ac();
  }
  return;
}


